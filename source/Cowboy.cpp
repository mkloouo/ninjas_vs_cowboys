#include "Cowboy.h"

#include <iostream>

void Cowboy::shoot(Character* enemy)
{
    if (!isAlive() || !hasBullets()) return;

    enemy->hit(10);
    --bullets_;
}

void Cowboy::print() const
{
    std::cout << "C ";
    Character::print();
}
