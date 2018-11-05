#include "Character.h"

#include <iostream>

void Character::hit(int amount)
{
    if (hp_ > 0)
    {
        hp_ -= amount;
    }
}

void Character::print() const
{
    if (!isAlive())
        std::cout << "[";
    std::cout << name_;
    if (!isAlive())
        std::cout << "] ";
    else
        std::cout << " " << hp_;
}
