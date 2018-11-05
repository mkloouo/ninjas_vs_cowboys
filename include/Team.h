#ifndef NINJA_VS_COWBOYS_TEAM_H
#define NINJA_VS_COWBOYS_TEAM_H

#include "Character.h"

#include <vector>
#include <memory>

class Team
{
public:
	Team(Character* leader)
		: last_member_idx_(0), members_(10)
	{
		members_[last_member_idx_++].reset(leader);
	}
	~Team() {}

	void add(Character* member);
	void attack(Team* enemies);

	int stillAlive() const;
	void print() const;

private:
	static const int MAX_MEMBERS {10};
	static const int GROUP_LEADER_POS {0};

	int last_member_idx_;
	std::vector<std::shared_ptr<Character>> members_;
};

#endif // NINJA_VS_COWBOYS_TEAM_H