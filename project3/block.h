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
};

#endif // BLOCK_H
