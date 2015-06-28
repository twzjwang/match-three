#ifndef PLAYER_H
#define PLAYER_H

#include <QString>


class Player
{
    public:
        Player();
        ~Player();

        bool operator>(Player);

        void setName(){}
        virtual QString getName(){
            name.sprintf("base");
            return name;
        }

        int score;
        int attack;
        int open;//0:for player 1:close 2:for computer
        int lose;
        int attack_num;
        double score_per_move;

        QString name;

};

#endif // PLAYER

