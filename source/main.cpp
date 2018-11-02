#include "Point.h"
#include <iostream>

int main()
{
	Point p1(12, 13);
	Point p2(-20, 2.2);
	p1.print(); std::cout << std::endl;
	p2.print(); std::cout << std::endl;
	std::cout << p1.distance(p2) << std::endl;
	return 0;
}
