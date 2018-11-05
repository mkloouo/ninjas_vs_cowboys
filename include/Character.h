#ifndef NINJA_VS_COWBOYS_CHARACTER_H
#define NINJA_VS_COWBOYS_CHARACTER_H

#include <string>
#include "Point.h"

class Character
{
public:
	Character(std::string name, int hp, Point location)
		: name_(name), hp_(hp), location_(location)
	{}
	virtual ~Character() {}

	void print() const;
	bool isAlive() const { return hp_ > 0; }
	std::string getName() const { return name_; }
	Point getLocation() const { return location_; }
	double distance(Character const* other) const
	{
		return location_.distance(other->getLocation());
	}

	void hit(int amount);

protected:
	std::string name_;
	int hp_;
	Point location_;
};

#endif // NINJA_VS_COWBOYS_CHARACTER_H
