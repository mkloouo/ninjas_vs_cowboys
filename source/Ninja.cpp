#include "Ninja.h"

#include <iostream>

void Ninja::move(Character const* enemy)
{
	location_ = Point::moveTowards(location_, enemy->getLocation(), speed_);
}

void Ninja::slash(Character* enemy)
{
	if (!isAlive() || distance(enemy) >= 1) return;

	enemy->hit(NINJA_DAMAGE);
}

void Ninja::print() const
{
    std::cout << "N ";
    Character::print();
}
