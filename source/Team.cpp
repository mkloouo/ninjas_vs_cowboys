#include "Team.h"

#include <algorithm>

void Team::add(Character* member)
{
	if (last_member_idx_ < MAX_MEMBERS)
		members_[last_member_idx_++].reset(member);
}

void Team::attack(Team* enemies)
{
	while (last_member_idx_ > GROUP_LEADER_POS && !members_[GROUP_LEADER_POS]->isAlive())
	{
		std::rotate(members_.begin(), members_.begin() + 1, members_.end());
		--last_member_idx_;
	}


}

int Team::stillAlive() const
{
	return 0;
}

void Team::print() const
{

}
