#include <iostream>

#include "Ninja.h"
#include "Cowboy.h"

void tryPoint()
{
	std::cout << "try point" << std::endl;
	Point p1(12, 13);
	Point p2(-20, 2.2);
	double distance = p1.distance(p2);

	p1.print(); std::cout << std::endl;
	p2.print(); std::cout << std::endl;
	std::cout << distance << std::endl;
	Point::moveTowards(p1, p2, distance / 2).print(); std::cout << std::endl;
	std::cout << std::endl;
}

void tryNinja()
{
	std::cout << "try ninja" << std::endl;

	Ninja young_ninja("Yuke", Ninja::Type::Young, {0, 0});
	young_ninja.print(); std::cout << std::endl;
	young_ninja.hit(1000);
	young_ninja.print(); std::cout << std::endl;
	std::cout << std::endl;
}

void tryCowboy()
{
	std::cout << "try cowboy" << std::endl;

	Cowboy first_cowboy("Hellman", {0, 0});
	first_cowboy.print(); std::cout << std::endl;
	first_cowboy.hit(1000);
	first_cowboy.print(); std::cout << std::endl;
	std::cout << std::endl;
}

int main()
{
	tryPoint();
	tryNinja();
	tryCowboy();
	return 0;
}
