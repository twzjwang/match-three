#ifndef PLAYER_PLAYER2
#define PLAYER_PLAYER2

#include "player.h"
#include <QString>

class Player_player2:public Player
{
    public:
        Player_player2(){}
        ~Player_player2(){}

        QString getName(){
            name.sprintf("player2");
            return name;
        }
};

#endif // PLAYER_PLAYER2

