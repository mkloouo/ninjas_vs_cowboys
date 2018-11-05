#include "Point.h"

#include <cmath>
#include <iostream>

double Point::distance(Point const& p2) const
{
	return std::sqrt(std::pow(p2.x_ - x_, 2) + std::pow(p2.y_ - y_, 2));
}

void Point::print() const
{
	std::cout << "[" << x_ << ", " << y_ << "]";
}

Point Point::moveTowards(Point const& source, Point const& target, double distance)
{
	double total_distance = source.distance(target);
	if (total_distance <= distance)
		return (target);
	
	double sin_a = (source.x_ - target.x_) / total_distance;
	double cos_a = (source.y_ - target.y_) / total_distance;
	return Point(sin_a * distance, cos_a * distance);
}
