#ifndef PLAYER_PLAYER1
#define PLAYER_PLAYER1

#include "player.h"
#include <QString>

class Player_player1:public Player
{
    public:
        Player_player1(){}
        ~Player_player1(){}

        QString getName(){
            name.sprintf("player1");
            return name;
        }
};

#endif // PLAYER_PLAYER1

