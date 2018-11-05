#ifndef NINJA_VS_COWBOYS_NINJA_H
#define NINJA_VS_COWBOYS_NINJA_H

#include "Character.h"

class Ninja : public Character
{
public:
	enum class Type {Young, Trained, Old};
    Ninja(std::string name, Type type, Point location)
        : Character(name, 120, location)
    {
		if (type == Type::Young || type == Type::Old)
		{
			hit(20);
			speed_ = (type == Type::Young) ? 10 : 8;
		}
		else
		{
			speed_ = 12;
		}
	}
    ~Ninja() {}

	void move(Character const* enemy);
	void slash(Character* enemy);
    void print() const;

protected:
    int speed_;

private:
	static const int NINJA_DAMAGE {40};
};

#endif // NINJA_VS_COWBOYS_NINJA_H
