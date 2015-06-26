#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    public:
        Player();
        ~Player();

        int score;
        int attack;
        int open;//0:for player 1:close 2:for computer
        int lose;
};

#endif // PLAYER

