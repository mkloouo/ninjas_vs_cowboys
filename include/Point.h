#ifndef NINJA_VS_COWBOYS_POINT_H
#define NINJA_VS_COWBOYS_POINT_H

class Point
{
public:
	Point(double x, double y) : x_(x), y_(y) {}
	double distance(Point const& p2);
	void print();
	Point moveTowards(Point const& source, Point const& target, double distance);

private:
	double x_;
	double y_;
};

#endif // NINJA_VS_COWBOYS_POINT_H
