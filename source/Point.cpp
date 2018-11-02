#include "Point.h"

#include <cmath>
#include <iostream>

double Point::distance(Point const& p2)
{
	return std::sqrt(std::pow(p2.x_ - x_, 2) + std::pow(p2.y_ - y_, 2));
}

void Point::print()
{
	std::cout << "[" << x_ << ", " << y_ << "]";
}

Point moveTowards(Point const& source, Point const& target, double distance)
{
	
}
