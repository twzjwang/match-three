#ifndef PLAYER_COMPUTER
#define PLAYER_COMPUTER

#include "player.h"
#include <QString>

class Player_computer:public Player
{
    public:
        Player_computer(){}
        ~Player_computer(){}

        QString getName(){
            name.sprintf("bad AI");
            return name;
        }
};

#endif // PLAYER_COMPUTER

