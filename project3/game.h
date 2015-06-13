#ifndef GAME_H
#define GAME_H

#include <block.h>
#include <QObject>
#include <QString>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QSignalMapper>
#include <QPropertyAnimation>
#include <QPixmap>
#include <QtGui>
#include <QtCore>
#include <QDialog>
#include <QTimer>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <math.h>
#include <stdlib.h>

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:

    explicit Game(QWidget *parent = 0);

    ~Game();

    void myShow();//myshow

    void giveStartBlock(int t);//0:0 1:1 2:both

    void setPB(int x, int y, int z, int p);//set pushbottun

    void Creat(int x, int y, int z, int p);//creat random pic(or p)

    //check if any block could be eliminated(yes:1 no:0)
    //if record_elm=1 record elm
    int checkEliminate(int x,int record_elm);

    void doEliminate(int x);

    void checkClick(int x);

    void resetClick(int x);

    void resetElm(int x);

    void doChange(int x1,int y1,int z1,int x2,int y2,int z2);

    void doFall(int x);

    void doAnimation(int x1,int y1,int z1,int x2,int y2,int z2,int type=0);

private slots:

    void endChange0();

    void endChange1();

    void endFall0();

    void endFall1();

    void doClicked(int n);//when bottun is clicked

private:
    Ui::Game *ui;
    Block pb[2][10][10];
    QPixmap pic[15];
    QSignalMapper *signalMapper;
    QPropertyAnimation *animation1, *animation2;
    QParallelAnimationGroup *group[2];
    int game_lock;//0:unlocked 1:locked
};

#endif // GAME_H
