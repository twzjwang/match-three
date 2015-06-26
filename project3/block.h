#ifndef BLOCK_H
#define BLOCK_H

class Block
{
    friend class Game;

    public:
        Block();
        ~Block();

        int pic;//current picture
        int click;//click(1) or not(0)
        int elm;//be eliminated(1) or not(0)

        //0:X 1:dearound 2:decolumn 3:derow 4:de_same_color
        int special_case;
        int desamecol;
};

#endif // BLOCK_H
