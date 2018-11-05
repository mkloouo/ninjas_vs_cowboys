#ifndef NINJA_VS_COWBOYS_COWBOY_H
#define NINJA_VS_COWBOYS_COWBOY_H

#include "Character.h"

class Cowboy : public Character
{
public:
    Cowboy(std::string name, Point location)
        : Character(name, 100, location), bullets_(6)
    {}
    ~Cowboy() {}

    bool hasBullets() const { return bullets_ > 0; }
    void reload() { bullets_ = 6; }
    void shoot(Character* enemy);
    void print() const;

protected:
    int bullets_;
};

#endif // NINJA_VS_COWBOYS_COWBOY_H
