#include "player.h"

Player::Player():score(0),attack(0),open(1),attack_num(5),score_per_move(0)
{

}

Player::~Player()
{

}

bool Player::operator>(Player t){
    if(this->score>t.score)
        return true;
    return false;
}
