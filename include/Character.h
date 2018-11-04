#ifndef NINJA_VS_COWBOYS_CHARACTER_H
#define NINJA_VS_COWBOYS_CHARACTER_H

#include <string>
#include "Point.h"

class Character
{
public:
	enum class Type {Ninja = 'N', Cowboy = 'C'};

	Character(std::string name, int hp, Type type,
		  Point initial_location = Point(0, 0))
		: name_(name), hp_(hp),
		type_(type), location_(initial_location)
	{
	}

	bool isAlive() { return hp_ <= 0; }
	double distance(Character const* other)
	{
		return location_.distance(other->getLocation());
	}
	void hit(int amount)
	{
		if (hp_ > 0)
		{
			hp_ -= amount;
		}
	}
	std::string getName() const { return name_; }
	Point getLocation() const { return location_; }
	void print() const;

private:
	std::string name_;
	int hp_;
	Type type_;
	Point location_;
};

#endif // NINJA_VS_COWBOYS_CHARACTER_H
