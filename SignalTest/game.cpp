#include "game.h"
#include "ui_game.h"

Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);    

    srand((unsigned)time(NULL));

    connect(this,SLOT(on_quit_clicked()),this,SIGNAL(quit(int,int)));

    QPixmap background("../pic/background.jpg");
    ui->background->setPixmap(background);

{
        QPixmap white("../pic/white.jpg");                          pic[1]=white;
        QPixmap red("../pic/red.jpg");                              pic[2]=red;
        QPixmap orange("../pic/orange.jpg");                        pic[3]=orange;
        QPixmap yellow("../pic/yellow.jpg");                        pic[4]=yellow;
        QPixmap green("../pic/green.jpg");                          pic[5]=green;
        QPixmap blue("../pic/blue.jpg");                            pic[6]=blue;
        QPixmap purple("../pic/purple.jpg");                        pic[7]=purple;
        QPixmap black("../pic/black.jpg");                          pic[8]=black;

        QPixmap de_around_red("../pic/de_around_red.jpg");          pic[12]=de_around_red;
        QPixmap de_around_orange("../pic/de_around_orange.jpg");    pic[13]=de_around_orange;
        QPixmap de_around_yellow("../pic/de_around_yellow.jpg");    pic[14]=de_around_yellow;
        QPixmap de_around_green("../pic/de_around_green.jpg");      pic[15]=de_around_green;
        QPixmap de_around_blue("../pic/de_around_blue.jpg");        pic[16]=de_around_blue;
        QPixmap de_around_purple("../pic/de_around_purple.jpg");    pic[17]=de_around_purple;
        QPixmap de_around_black("../pic/de_around.jpg");            pic[18]=de_around_black;

        QPixmap de_column_red("../pic/de_column_red.jpg");          pic[22]=de_column_red;
        QPixmap de_column_orange("../pic/de_column_orange.jpg");    pic[23]=de_column_orange;
        QPixmap de_column_yellow("../pic/de_column_yellow.jpg");    pic[24]=de_column_yellow;
        QPixmap de_column_green("../pic/de_column_green.jpg");      pic[25]=de_column_green;
        QPixmap de_column_blue("../pic/de_column_blue.jpg");        pic[26]=de_column_blue;
        QPixmap de_column_purple("../pic/de_column_purple.jpg");    pic[27]=de_column_purple;
        QPixmap de_column_black("../pic/de_column.jpg");            pic[28]=de_column_black;

        QPixmap de_row_red("../pic/de_row_red.jpg");                pic[32]=de_row_red;
        QPixmap de_row_orange("../pic/de_row_orange.jpg");          pic[33]=de_row_orange;
        QPixmap de_row_yellow("../pic/de_row_yellow.jpg");          pic[34]=de_row_yellow;
        QPixmap de_row_green("../pic/de_row_green.jpg");            pic[35]=de_row_green;
        QPixmap de_row_blue("../pic/de_row_blue.jpg");              pic[36]=de_row_blue;
        QPixmap de_row_purple("../pic/de_row_purple.jpg");          pic[37]=de_row_purple;
        QPixmap de_row_black("../pic/de_row.jpg");                  pic[38]=de_row_black;

        QPixmap de_same_color("../pic/de_same_color.jpg");          pic[40]=de_same_color;
}


{
        button[0][0][0]=ui->pb000;
        button[0][0][1]=ui->pb001;
        button[0][0][2]=ui->pb002;
        button[0][0][3]=ui->pb003;
        button[0][0][4]=ui->pb004;
        button[0][0][5]=ui->pb005;
        button[0][0][6]=ui->pb006;
        button[0][0][7]=ui->pb007;
        button[0][0][8]=ui->pb008;
        button[0][0][9]=ui->pb009;
        button[0][1][0]=ui->pb010;
        button[0][1][1]=ui->pb011;
        button[0][1][2]=ui->pb012;
        button[0][1][3]=ui->pb013;
        button[0][1][4]=ui->pb014;
        button[0][1][5]=ui->pb015;
        button[0][1][6]=ui->pb016;
        button[0][1][7]=ui->pb017;
        button[0][1][8]=ui->pb018;
        button[0][1][9]=ui->pb019;
        button[0][2][0]=ui->pb020;
        button[0][2][1]=ui->pb021;
        button[0][2][2]=ui->pb022;
        button[0][2][3]=ui->pb023;
        button[0][2][4]=ui->pb024;
        button[0][2][5]=ui->pb025;
        button[0][2][6]=ui->pb026;
        button[0][2][7]=ui->pb027;
        button[0][2][8]=ui->pb028;
        button[0][2][9]=ui->pb029;
        button[0][3][0]=ui->pb030;
        button[0][3][1]=ui->pb031;
        button[0][3][2]=ui->pb032;
        button[0][3][3]=ui->pb033;
        button[0][3][4]=ui->pb034;
        button[0][3][5]=ui->pb035;
        button[0][3][6]=ui->pb036;
        button[0][3][7]=ui->pb037;
        button[0][3][8]=ui->pb038;
        button[0][3][9]=ui->pb039;
        button[0][4][0]=ui->pb040;
        button[0][4][1]=ui->pb041;
        button[0][4][2]=ui->pb042;
        button[0][4][3]=ui->pb043;
        button[0][4][4]=ui->pb044;
        button[0][4][5]=ui->pb045;
        button[0][4][6]=ui->pb046;
        button[0][4][7]=ui->pb047;
        button[0][4][8]=ui->pb048;
        button[0][4][9]=ui->pb049;
        button[0][5][0]=ui->pb050;
        button[0][5][1]=ui->pb051;
        button[0][5][2]=ui->pb052;
        button[0][5][3]=ui->pb053;
        button[0][5][4]=ui->pb054;
        button[0][5][5]=ui->pb055;
        button[0][5][6]=ui->pb056;
        button[0][5][7]=ui->pb057;
        button[0][5][8]=ui->pb058;
        button[0][5][9]=ui->pb059;
        button[0][6][0]=ui->pb060;
        button[0][6][1]=ui->pb061;
        button[0][6][2]=ui->pb062;
        button[0][6][3]=ui->pb063;
        button[0][6][4]=ui->pb064;
        button[0][6][5]=ui->pb065;
        button[0][6][6]=ui->pb066;
        button[0][6][7]=ui->pb067;
        button[0][6][8]=ui->pb068;
        button[0][6][9]=ui->pb069;
        button[0][7][0]=ui->pb070;
        button[0][7][1]=ui->pb071;
        button[0][7][2]=ui->pb072;
        button[0][7][3]=ui->pb073;
        button[0][7][4]=ui->pb074;
        button[0][7][5]=ui->pb075;
        button[0][7][6]=ui->pb076;
        button[0][7][7]=ui->pb077;
        button[0][7][8]=ui->pb078;
        button[0][7][9]=ui->pb079;
        button[0][8][0]=ui->pb080;
        button[0][8][1]=ui->pb081;
        button[0][8][2]=ui->pb082;
        button[0][8][3]=ui->pb083;
        button[0][8][4]=ui->pb084;
        button[0][8][5]=ui->pb085;
        button[0][8][6]=ui->pb086;
        button[0][8][7]=ui->pb087;
        button[0][8][8]=ui->pb088;
        button[0][8][9]=ui->pb089;
        button[0][9][0]=ui->pb090;
        button[0][9][1]=ui->pb091;
        button[0][9][2]=ui->pb092;
        button[0][9][3]=ui->pb093;
        button[0][9][4]=ui->pb094;
        button[0][9][5]=ui->pb095;
        button[0][9][6]=ui->pb096;
        button[0][9][7]=ui->pb097;
        button[0][9][8]=ui->pb098;
        button[0][9][9]=ui->pb099;
        button[1][0][0]=ui->pb100;
        button[1][0][1]=ui->pb101;
        button[1][0][2]=ui->pb102;
        button[1][0][3]=ui->pb103;
        button[1][0][4]=ui->pb104;
        button[1][0][5]=ui->pb105;
        button[1][0][6]=ui->pb106;
        button[1][0][7]=ui->pb107;
        button[1][0][8]=ui->pb108;
        button[1][0][9]=ui->pb109;
        button[1][1][0]=ui->pb110;
        button[1][1][1]=ui->pb111;
        button[1][1][2]=ui->pb112;
        button[1][1][3]=ui->pb113;
        button[1][1][4]=ui->pb114;
        button[1][1][5]=ui->pb115;
        button[1][1][6]=ui->pb116;
        button[1][1][7]=ui->pb117;
        button[1][1][8]=ui->pb118;
        button[1][1][9]=ui->pb119;
        button[1][2][0]=ui->pb120;
        button[1][2][1]=ui->pb121;
        button[1][2][2]=ui->pb122;
        button[1][2][3]=ui->pb123;
        button[1][2][4]=ui->pb124;
        button[1][2][5]=ui->pb125;
        button[1][2][6]=ui->pb126;
        button[1][2][7]=ui->pb127;
        button[1][2][8]=ui->pb128;
        button[1][2][9]=ui->pb129;
        button[1][3][0]=ui->pb130;
        button[1][3][1]=ui->pb131;
        button[1][3][2]=ui->pb132;
        button[1][3][3]=ui->pb133;
        button[1][3][4]=ui->pb134;
        button[1][3][5]=ui->pb135;
        button[1][3][6]=ui->pb136;
        button[1][3][7]=ui->pb137;
        button[1][3][8]=ui->pb138;
        button[1][3][9]=ui->pb139;
        button[1][4][0]=ui->pb140;
        button[1][4][1]=ui->pb141;
        button[1][4][2]=ui->pb142;
        button[1][4][3]=ui->pb143;
        button[1][4][4]=ui->pb144;
        button[1][4][5]=ui->pb145;
        button[1][4][6]=ui->pb146;
        button[1][4][7]=ui->pb147;
        button[1][4][8]=ui->pb148;
        button[1][4][9]=ui->pb149;
        button[1][5][0]=ui->pb150;
        button[1][5][1]=ui->pb151;
        button[1][5][2]=ui->pb152;
        button[1][5][3]=ui->pb153;
        button[1][5][4]=ui->pb154;
        button[1][5][5]=ui->pb155;
        button[1][5][6]=ui->pb156;
        button[1][5][7]=ui->pb157;
        button[1][5][8]=ui->pb158;
        button[1][5][9]=ui->pb159;
        button[1][6][0]=ui->pb160;
        button[1][6][1]=ui->pb161;
        button[1][6][2]=ui->pb162;
        button[1][6][3]=ui->pb163;
        button[1][6][4]=ui->pb164;
        button[1][6][5]=ui->pb165;
        button[1][6][6]=ui->pb166;
        button[1][6][7]=ui->pb167;
        button[1][6][8]=ui->pb168;
        button[1][6][9]=ui->pb169;
        button[1][7][0]=ui->pb170;
        button[1][7][1]=ui->pb171;
        button[1][7][2]=ui->pb172;
        button[1][7][3]=ui->pb173;
        button[1][7][4]=ui->pb174;
        button[1][7][5]=ui->pb175;
        button[1][7][6]=ui->pb176;
        button[1][7][7]=ui->pb177;
        button[1][7][8]=ui->pb178;
        button[1][7][9]=ui->pb179;
        button[1][8][0]=ui->pb180;
        button[1][8][1]=ui->pb181;
        button[1][8][2]=ui->pb182;
        button[1][8][3]=ui->pb183;
        button[1][8][4]=ui->pb184;
        button[1][8][5]=ui->pb185;
        button[1][8][6]=ui->pb186;
        button[1][8][7]=ui->pb187;
        button[1][8][8]=ui->pb188;
        button[1][8][9]=ui->pb189;
        button[1][9][0]=ui->pb190;
        button[1][9][1]=ui->pb191;
        button[1][9][2]=ui->pb192;
        button[1][9][3]=ui->pb193;
        button[1][9][4]=ui->pb194;
        button[1][9][5]=ui->pb195;
        button[1][9][6]=ui->pb196;
        button[1][9][7]=ui->pb197;
        button[1][9][8]=ui->pb198;
        button[1][9][9]=ui->pb199;
    }

    signalMapper = new QSignalMapper(this);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
        connect(button[0][i][j], SIGNAL(clicked()), signalMapper, SLOT(map ()));
        signalMapper->setMapping (button[0][i][j],10*i+j);

        connect(button[1][i][j], SIGNAL(clicked()), signalMapper, SLOT(map ()));
        signalMapper->setMapping (button[1][i][j],100+10*i+j);
        }
    }
    connect(signalMapper, SIGNAL(mapped (int)), this, SLOT(doClicked(int)));

    game_lock[0]=0;
    game_lock[1]=0;

    myShow();
}

Game::~Game()
{
    emit quit(high_star,high_score);
    delete ui;
}

//myshow
void Game::myShow(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            //setPB(0,i,j,pb[0][i][j].pic);
            //setPB(1,i,j,pb[1][i][j].pic);
            button[0][i][j]->setIcon(pic[pb[0][i][j].pic]);
            button[0][i][j]->setIconSize(button[0][i][j]->size());
            button[1][i][j]->setIcon(pic[pb[1][i][j].pic]);
            button[1][i][j]->setIconSize(button[1][i][j]->size());
        }
    }
    if(player[0].open==1&&player[1].open==0)
        player[0].attack=0;
    if(move[0]!=0)
        player[0].score_per_move=(float)player[0].score/move[0];
    if(move[1]!=0)
        player[1].score_per_move=(float)player[1].score/move[1];

    QString s;

    s.sprintf("%d",player[0].score);
    ui->label_score_0->setText(s);//text
    ui->label_score_0->setFont(QFont("Calibri",27));//style size
    ui->label_score_0->setAlignment(Qt::AlignCenter);//center
    ui->label_score_0->setStyleSheet("QLabel{color : white;}");//color

    s.sprintf("%d",player[1].score);
    ui->label_score_1->setText(s);//text
    ui->label_score_1->setFont(QFont("Calibri",27));//style size
    ui->label_score_1->setAlignment(Qt::AlignCenter);//center
    ui->label_score_1->setStyleSheet("QLabel{color : white;}");//color

    s.sprintf("%d",player[0].attack);
    ui->label_attack_0->setText(s);//text
    ui->label_attack_0->setFont(QFont("Calibri",27));//style size
    ui->label_attack_0->setAlignment(Qt::AlignCenter);//center
    ui->label_attack_0->setStyleSheet("QLabel{color : white;}");//color

    s.sprintf("%d",player[1].attack);
    ui->label_attack_1->setText(s);//text
    ui->label_attack_1->setFont(QFont("Calibri",27));//style size
    ui->label_attack_1->setAlignment(Qt::AlignCenter);//center
    ui->label_attack_1->setStyleSheet("QLabel{color : white;}");//color

    s.sprintf("%.2f",player[0].score_per_move);
    ui->label_imf_num0->setText(s);//text
    ui->label_imf_num0->setFont(QFont("Calibri",27));//style size
    ui->label_imf_num0->setAlignment(Qt::AlignCenter);//center
    ui->label_imf_num0->setStyleSheet("QLabel{color : white;}");//color

    s.sprintf("%.2f",player[1].score_per_move);
    ui->label_imf_num1->setText(s);//text
    ui->label_imf_num1->setFont(QFont("Calibri",27));//style size
    ui->label_imf_num1->setAlignment(Qt::AlignCenter);//center
    ui->label_imf_num1->setStyleSheet("QLabel{color : white;}");//color

    ui->label_imf0_2->hide();
    ui->label_imf1_2->hide();
    ui->label_imf0->show();
    ui->label_imf1->show();
    show();
}

void Game::giveStartBlock(int t){
    if(t!=0&&t!=1){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                do{Creat(0,i,j,0);}while(checkEliminate(0,0)==1);
                do{Creat(1,i,j,0);}while(checkEliminate(1,0)==1);
            }
        }
    }
    else{
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++)
                do{Creat(t,i,j,0);}while(checkEliminate(t,0)==1);
        }
    }
}

//creat random pic(or p)
void Game::Creat(int x, int y, int z, int p=0){
    int t;
    t=rand()%6+2;
    if(p!=0)
        t=p;
    pb[x][y][z].pic=t;
}

//check if any block could be eliminated(yes:1 no:0)
//if record_elm=1 record elm
int Game::checkEliminate(int x, int record_elm=0){
    //std::cout<<"checkEliminate\n";
    int con;//number of contiune blocks
    int temp;
    int re=0;
    int s=0;
    int tx=-1,ty=-1,tz=-1;

    //check row
    for(int i=0;i<10;i++){
        con=1;temp=0;
        for(int j=0;j<10;j++){
            if(temp==pb[x][i][j].pic%10){
                if(pb[x][i][j].pic%10>=2&&pb[x][i][j].pic%10<=7)
                    con++;;
            }
            else{
                if(con>=3){
//                    std::cout<<"row: "<<con<<"\n";
                    for(int k=1;k<=con;k++)
                        if(record_elm==1)pb[x][i][j-k].elm=1;
                    if(con>=5){
                        checkSpecialCase(x);
                        pb[x][i][j-3].pic=40;
                        pb[x][i][j-3].elm=0;
                    }
                    else if(con>=4){
                        checkSpecialCase(x);
                        checkSpecialCase(x);
                        pb[x][i][j-2].pic=30+pb[x][i][j-2].pic%10;
                        pb[x][i][j-2].elm=0;
                    }
                    re=1;                    
                }
                con=1;
            }
            temp=pb[x][i][j].pic%10;
        }
        if(con>=3){
//            std::cout<<"row: "<<con<<"\n";
            for(int k=1;k<=con;k++)
                if(record_elm==1)pb[x][i][10-k].elm=1;
            if(con>=5){
                checkSpecialCase(x);
                pb[x][i][7].pic=40;
                pb[x][i][7].elm=0;
            }
            else if(con>=4){
                checkSpecialCase(x);
                pb[x][i][8].pic=30+pb[x][i][8].pic%10;
                pb[x][i][8].elm=0;
            }
            re=1;
        }
        con=1;
    }

    //check column
    for(int j=0;j<10;j++){
        con=1;temp=0;
        for(int i=0;i<10;i++){
            if(temp==pb[x][i][j].pic%10){
                if(pb[x][i][j].pic%10>=2&&pb[x][i][j].pic%10<=7)
                    con++;;
            }
            else{
                if(con>=3){
//                    std::cout<<"col: "<<con<<"\n";
                    for(int k=1;k<=con;k++)
                        if(record_elm==1){
                            if(pb[x][i-k][j].elm==1){
                                tx=x;ty=i-k;tz=j;
                                pb[x][i-k][j].elm=0;
                                s=1;
                            }
                            else
                                pb[x][i-k][j].elm=1;
                        }
                    if(con>=5){
                        checkSpecialCase(x);
                        pb[x][i-3][j].pic=40;
                        pb[x][i-3][j].elm=0;
                    }
                    else if(con>=4){
                        checkSpecialCase(x);
                        pb[x][i-2][j].pic=20+pb[x][i-2][j].pic%10;
                        pb[x][i-2][j].elm=0;
                    }
                    else if(s==1)
                        pb[tx][ty][tz].pic=10+pb[x][i-2][j].pic%10;
                    re=1;
                    s=0;
                }
                con=1;
            }
            temp=pb[x][i][j].pic%10;
        }
        if(con>=3){
//            std::cout<<"col: "<<con<<"\n";
            for(int k=1;k<=con;k++)
                if(record_elm==1){
                    if(pb[x][10-k][j].elm==1){
                        tx=x;ty=9;tz=j;
                        pb[x][10-k][j].elm=0;
                    }
                    else
                        pb[x][10-k][j].elm=1;
                }
            if(con>=5){
                checkSpecialCase(x);
                pb[x][7][j].pic=40;
                pb[x][7][j].elm=0;
            }
            else if(con>=4){
                checkSpecialCase(x);
                pb[x][8][j].pic=20+pb[x][8][j].pic%10;
                pb[x][8][j].elm=0;
            }
            else if(s==1)
                pb[tx][ty][tz].pic=10+pb[tx][ty][tz].pic%10;
            re=1;

        }
        con=1;
        s=0;
    }
//    for(int i=0;i<10;i++){
//        for(int j=0;j<10;j++){
//            if(pb[x][i][j].pic>10&&pb[x][i][j].elm==1){
//                if(pb[x][i][j].pic>=40){
//                    pb[x][i][j].special_case=4;
//                    pb[x][i][j].desamecol=0;
//                }
//                else if(pb[x][i][j].pic>30)
//                    pb[x][i][j].special_case=3;
//                else if(pb[x][i][j].pic>20)
//                    pb[x][i][j].special_case=2;
//                else if(pb[x][i][j].pic>10)
//                    pb[x][i][j].special_case=1;
//                re=1;
//            }
//        }
//    }
    checkSpecialCase(x);
    return re;
}

void Game::doEliminate(int x){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].elm==1){
                pb[x][i][j].pic=0;
                player[x].score++;
                player[x].attack++;
            }
        }
    }
    resetElm(x);
}

void Game::checkClick(int x){
    int count_clicked=0;
    int x1=-1,x2=-1,y1=-1,y2=-1,z1=-1,z2=-1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].click==1){
                if(count_clicked==0){
                    x1=x;y1=i;z1=j;
                    count_clicked++;
                }
                else if(count_clicked==1){
                    x2=x;y2=i;z2=j;
                    count_clicked++;
                }
//                else{
//                    resetClick(x);
//                    return;
//                }

            }
        }
    }
//    std::cout<<"check"<<x1<<" "<<y1<<" "<<z1<<" && "<<x2<<" "<<y2<<" "<<z2<<"\n";
    if(count_clicked!=2){
//        std::cout<<"only one clicked\n";
        game_lock[x]=0;
        return;
    }
    if(x1!=x2){
//        std::cout<<"x1!=x2\n";
        resetClick(x);
        game_lock[x]=0;
        return;
    }

    else if(abs(y1-y2)+abs(z1-z2)>1){
//        std::cout<<"cant change\n";
        if(player[1].open==2){
            resetClick(x);
            game_lock[x]=0;
            autoRun(1);
            return;
        }
        resetClick(x);
        game_lock[x]=0;
        return;
    }
    else{
        if(pb[x1][y1][z1].pic>=40){
            pb[x2][y2][z2].special_case=4;
            pb[x2][y2][z2].desamecol=pb[x2][y2][z2].pic%10;
            reverse[x]=1;
            de_same_color(x2,y2,z2,pb[x2][y2][z2].pic%10);
            pb[x1][y1][z1].elm=1;
            pb[x2][y2][z2].elm=1;
        }
//        else if(pb[x1][y1][z1].pic>30)
//            pb[x2][y2][z2].special_case=3;
//        else if(pb[x1][y1][z1].pic>20)
//            pb[x2][y2][z2].special_case=2;
//        else if(pb[x1][y1][z1].pic>10){
//            pb[x2][y2][z2].special_case=1;
//            pb[x2][y2][z2].desamecol=pb[x1][y1][z1].pic%10;
//        }
        if(pb[x2][y2][z2].pic>=40){
            pb[x1][y1][z1].special_case=4;
            pb[x1][y1][z1].desamecol=pb[x1][y1][z1].pic%10;
            reverse[x]=1;
            de_same_color(x1,y1,z1,pb[x1][y1][z1].pic%10);
            pb[x2][y2][z2].elm=1;
            pb[x1][y1][z1].elm=1;
        }
//        else if(pb[x2][y2][z2].pic>30)
//            pb[x1][y1][z1].special_case=3;
//        else if(pb[x2][y2][z2].pic>20)
//            pb[x1][y1][z1].special_case=2;
//        else if(pb[x2][y2][z2].pic>10)
//            pb[x1][y1][z1].special_case=1;
        doChange(x1,y1,z1,x2,y2,z2);
        //doFall(x1);
    }
}

int Game::checkLose(int x){
    int b=1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].pic!=8)
                b=0;
        }
    }
    return b;
}

void Game::checkSpecialCase(int x){
    //std::cout<<"checkSpecialCase\n";
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].pic>10&&pb[x][i][j].elm==1){
                if(pb[x][i][j].pic>=40){
                    pb[x][i][j].special_case=4;
                    pb[x][i][j].desamecol=0;
                }
                else if(pb[x][i][j].pic>30)
                    pb[x][i][j].special_case=3;
                else if(pb[x][i][j].pic>20)
                    pb[x][i][j].special_case=2;
                else if(pb[x][i][j].pic>10)
                    pb[x][i][j].special_case=1;

            }
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].special_case==1&&pb[x][i][j].elm==1)
                de_around(x,i,j);
            else if(pb[x][i][j].special_case==2&&pb[x][i][j].elm==1)
                de_column(x,i,j);
            else if(pb[x][i][j].special_case==3&&pb[x][i][j].elm==1)
                de_row(x,i,j);
            else if(pb[x][i][j].special_case==4&&pb[x][i][j].elm==1)
                de_same_color(x,i,j,pb[x][i][j].desamecol);
        }
    }
    resetSpecialCase(x);
}

void Game::resetClick(int x){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            pb[x][i][j].click=0;
        }
    }
}

void Game::resetElm(int x){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            pb[x][i][j].elm=0;
        }
    }
}

void Game::resetSpecialCase(int x){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            pb[x][i][j].special_case=0;
            pb[x][i][j].desamecol=-1;
        }
    }
}

void Game::doChange(int x1,int y1,int z1,int x2,int y2,int z2){
    //std::cout<<"change"<<x1<<" "<<y1<<" "<<z1<<" && "<<x2<<" "<<y2<<" "<<z2<<"\n";
    doAnimation(x1,y1,z1,x2,y2,z2);
    //resetClick(x1);
    myShow();
}

int Game::doFall(int x){
    //std::cout<<"doFall\n";
    int b=0;//b=0 no falling block
    for(int i=0;i<10;i++){
        bool processed_pos[10]={0};//processed:1
        int from_pos[10]={0};
        b=0;
        for(int j=9;j>0;j--){
            int temp=0;
            for(int k=j;k>=0;k--){
                if(pb[x][k][i].pic!=0&&processed_pos[k]==0){
                    temp=k;
                    processed_pos[k]=1;
                    break;
                }
            }
            from_pos[j]=temp;
        }

        for(int j=9;j>=0;j--){            
            if(j!=from_pos[j]){
                //std::cout<<"dorow1-9\n";
                b=1;
                doAnimation(x,j,i,x,from_pos[j],i,1);
                return 0;
            }
            if(b==1||pb[x][0][i].pic==0){
                Creat(x,0,i,0);
                game_lock[x]=0;
                b=0;
            }
        }
        myShow();
    }
    if(player[1].open==2&&reverse[1]==1&&x==1){
        resetClick(x);
        game_lock[x]=0;
        autoRun(1);
        return 1;
    }
    return 1;
}

void Game::doReverse(int x){    
    int count_clicked=0;
    int x1=-1,x2=-1,y1=-1,y2=-1,z1=-1,z2=-1;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].click==1){
                if(count_clicked==0){
                    x1=x;y1=i;z1=j;
                    count_clicked++;
                }
                else if(count_clicked==1){
                    x2=x;y2=i;z2=j;
                    count_clicked++;
                }
                else{
                    resetClick(x);
                    return;
                }

            }
        }
    }
//    std::cout<<"check"<<x1<<" "<<y1<<" "<<z1<<" && "<<x2<<" "<<y2<<" "<<z2<<"\n";
    resetClick(x);
    resetSpecialCase(x);
    doAnimation(x1,y1,z1,x2,y2,z2);
}

void Game::doAttack(int x){
    int t,y,z;
    if(checkLose(x)==1)
        return;
    do{
        t=rand()%100;
        y=t/10%10;
        z=t%10;       
//        std::cout<<x<<y<<z<<"\n";
    }while(pb[x][y][z].pic==8);
    pb[x][y][z].pic=8;
}

//type 0: change    1:fall  2: column 0
void Game::doAnimation(int x1,int y1,int z1,int x2,int y2,int z2,int type){
    //std::cout<<" x1: "<<x1<<" y1: "<<y1<<" z1: "<<z1<<" x2: "<<x2<<" y2: "<<y2<<" z2: "<<z2<<" type: "<<type<<"\n";
    //game_lock=1;
    QPushButton *p1,*p2;
    int temp;

    p1=button[x1][y1][z1];
    p2=button[x2][y2][z2];


    if(type<=0){
        //std::cout<<"type==0\n";
        animation1 = new QPropertyAnimation(p1, "geometry");
        animation2 = new QPropertyAnimation(p2, "geometry");
        temp=pb[x1][y1][z1].pic;
        pb[x1][y1][z1].pic=pb[x2][y2][z2].pic;
        pb[x2][y2][z2].pic=temp;
        p1->setIcon(pic[pb[x2][y2][z2].pic]);
        p2->setIcon(pic[pb[x1][y1][z1].pic]);
        animation1->setDuration(150);
        animation1->setStartValue(p2->geometry());
        animation1->setEndValue(p1->geometry());
        animation2->setDuration(150);
        animation2->setStartValue(p1->geometry());
        animation2->setEndValue(p2->geometry());

        group[x1] = new QParallelAnimationGroup;
        if(x1==0)connect(group[x1], SIGNAL(finished()), this, SLOT(endChange0()));
        else if(x1==1)connect(group[x1], SIGNAL(finished()), this, SLOT(endChange1()));
        group[x1]->addAnimation(animation1);
        group[x1]->addAnimation(animation2);
        game_lock[x1]=1;
        group[x1]->start();
    }
    else if(type==1){
        //std::cout<<"type==1\n";
        animation3 = new QPropertyAnimation(p1, "geometry");
        if(pb[x2][y2][z2].pic==0){
            Creat(x2,y2,z2,0);
        }
        pb[x1][y1][z1].pic=pb[x2][y2][z2].pic;
        p1->setIcon(pic[pb[x2][y2][z2].pic]);
        pb[x2][y2][z2].pic=0;
        myShow();
        animation3->setDuration(50+z1*5);
        animation3->setStartValue(p2->geometry());
        animation3->setEndValue(p1->geometry());
        //group2->addAnimation(animation3);
        game_lock[x1]=1;
        animation3->start();
        if(x1==0)connect(animation3, SIGNAL(finished()), this, SLOT(endFall0()));
        else if(x1==1)connect(animation3, SIGNAL(finished()), this, SLOT(endFall1()));
    }
}

void Game::de_around(int x,int y,int z){
    int ly,uy,lz,uz;
    player[x].score+=5;
//    std::cout<<"dearound\n";

    ly=(y<1?0:y-1);
    lz=(z<1?0:z-1);
    uy=(y>8?9:y+1);
    uz=(z>8?9:z+1);
    for(int i=ly;i<=uy;i++){
        for(int j=lz;j<=uz;j++){
            pb[x][i][j].elm=1;
        }
    }
//    int b=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].pic>10&&pb[x][i][j].elm==1){
                if(pb[x][i][j].pic>=40){
                    pb[x][i][j].special_case=4;
                    pb[x][i][j].desamecol=0;
                }
                else if(pb[x][i][j].pic>30)
                    pb[x][i][j].special_case=3;
                else if(pb[x][i][j].pic>20)
                    pb[x][i][j].special_case=2;
                else if(pb[x][i][j].pic>10)
                    pb[x][i][j].special_case=1;
//                b=1;
            }
        }
    }
//    if(b==1)
//        checkSpecialCase(x);
//    doEliminate(x);
//    if(b==0)
//        doFall(x);
}

void Game::de_column(int x,int y,int z){
    player[x].score+=5;
//    std::cout<<"deculumn\n";
    for(y=0;y<10;y++)
        pb[x][y][z].elm=1;
//    int b=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].pic>10&&pb[x][i][j].elm==1){
                if(pb[x][i][j].pic>=40){
                    pb[x][i][j].special_case=4;
                    pb[x][i][j].desamecol=0;
                }
                else if(pb[x][i][j].pic>30)
                    pb[x][i][j].special_case=3;
                else if(pb[x][i][j].pic>20)
                    pb[x][i][j].special_case=2;
                else if(pb[x][i][j].pic>10)
                    pb[x][i][j].special_case=1;
//                b=1;
            }
        }
    }
//    if(b==1)
//        checkSpecialCase(x);

//    if(b==0){
//        doEliminate(x);
//        doFall(x);
//    }
}

void Game::de_row(int x,int y,int z){
    player[x].score+=5;
//    std::cout<<"derow\n";
    for(z=0;z<10;z++)
        pb[x][y][z].elm=1;
//    int b=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].pic>10&&pb[x][i][j].elm==1){
                if(pb[x][i][j].pic>=40){
                    pb[x][i][j].special_case=4;
                    pb[x][i][j].desamecol=0;
                }
                else if(pb[x][i][j].pic>30)
                    pb[x][i][j].special_case=3;
                else if(pb[x][i][j].pic>20)
                    pb[x][i][j].special_case=2;
                else if(pb[x][i][j].pic>10)
                    pb[x][i][j].special_case=1;
//                b=1;
            }
        }
    }
//    if(b==1)
//        checkSpecialCase(x);
//    doEliminate(x);
//    if(b==0)
//        doFall(x);
}

void Game::de_same_color(int x,int y,int z,int color=0){
    move[x]+=0.5;
    pb[x][y][z].elm=1;
    player[x].score+=10;
    if(color==0)
        color=rand()%6+2;
    //std::cout<<"desamecolor"<<color<<"\n";
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].pic%10==color||pb[x][i][j].pic==40)
                pb[x][i][j].elm=1;
        }
    }
    int b=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].pic>10&&pb[x][i][j].elm==1){
//                if(pb[x][i][j].pic>=40){
//                    pb[x][i][j].special_case=4;
//                    pb[x][i][j].desamecol=0;
//                }
                if(pb[x][i][j].pic>30&&pb[x][i][j].pic<30)
                    pb[x][i][j].special_case=3;
                else if(pb[x][i][j].pic>20&&pb[x][i][j].pic<30)
                    pb[x][i][j].special_case=2;
                else if(pb[x][i][j].pic>10&&pb[x][i][j].pic<30)
                    pb[x][i][j].special_case=1;
//                b=1;
            }
        }
    }

//    if(b==1)
//        checkSpecialCase(x);
    doEliminate(x);
    if(b==0)
        doFall(x);
}


void Game::autoRun(int x=1){
    //std::cout<<"AutoRun\n";
    resetClick(x);
    QTime dieTime= QTime::currentTime().addSecs(1);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
//    if(player[0].lose==1||player[1].lose==1)
//        return;
    int t,s;
    t=rand()%100+x*100;
    s=rand()%4;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[1][i][j].pic>=10){
                t=10;
            }
        }
    }

    doClicked2(t);
    if(s==0&&(t+10)<200)
        doClicked2(t+10);
    else if(s==1&&(t-10)>99)
        doClicked2(t-10);
    else if(s==2&&(t+1)<200)
        doClicked2(t+1);
    else if((t-1)>99)
        doClicked2(t-1);
    else
        doClicked2(rand()%100+x*100);

    //autoRun(x);
}

void Game::game_over(){
    int star=0;
    QString s;
    if(player[0]>player[1])
        s.sprintf("<-win");
    else{
        if(player[1].open==1)
            s.sprintf("win->");
        else if(player[1].open==2)
            s.sprintf("win->");
    }
    ui->label_winner->setText(s);
    ui->label_winner->setFont(QFont("Calibri",26));//style size
    ui->label_winner->setAlignment(Qt::AlignCenter);//center
    ui->label_winner->setStyleSheet("QLabel{color : white;}");//color

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            pb[0][i][j].pic=0;
            pb[1][i][j].pic=0;
        }
    }
    resetClick(0);
    resetElm(0);
    resetClick(1);
    resetElm(1);

    player[0].open=0;
    player[1].open=0;
    game_lock[0]=0;
    game_lock[1]=0;

    myShow();

    if(player[0].score_per_move>=15)        star=3;
    else if(player[0].score_per_move>=9)    star=2;
    else if(player[0].score_per_move>=3)    star=1;
    else if(player[0].score_per_move<3)     star=0;
    s.sprintf("%d",star);
    ui->label_imf_num0->setText(s);//text
    ui->label_imf_num0->setFont(QFont("Calibri",27));//style size
    ui->label_imf_num0->setAlignment(Qt::AlignCenter);//center
    ui->label_imf_num0->setStyleSheet("QLabel{color : white;}");//color
    if(player[1].score_per_move>=15)        star=3;
    else if(player[1].score_per_move>=9)    star=2;
    else if(player[1].score_per_move>=3)    star=1;
    else if(player[1].score_per_move<3)     star=0;
    s.sprintf("%d",star);
    ui->label_imf_num1->setText(s);//text
    ui->label_imf_num1->setFont(QFont("Calibri",27));//style size
    ui->label_imf_num1->setAlignment(Qt::AlignCenter);//center
    ui->label_imf_num1->setStyleSheet("QLabel{color : white;}");//color

    ui->label_imf0->hide();
    ui->label_imf1->hide();
    ui->label_imf0_2->show();
    ui->label_imf1_2->show();
    show();

}

void Game::endChange0(){    
    int x=0;
    if(checkEliminate(x,1)==1){
        move[0]++;
        checkSpecialCase(0);
        doEliminate(x);
        doFall(x);
        reverse[0]=1;
        //std::cout<<"doFall\n";
    }
    else if(reverse[0]==0){
        reverse[0]=1;
        doReverse(0);
    }
    resetClick(x);
    myShow();
    game_lock[0]=0;
}

void Game::endChange1(){
    int x=1;
    if(checkEliminate(x,1)==1){
        move[1]++;
        checkSpecialCase(1);
        doEliminate(x);
        doFall(x);
        reverse[1]=1;
        //std::cout<<"doFall\n";
    }
    else if(reverse[1]==0){
        reverse[1]=1;
        doReverse(1);

    }
    else if(player[1].open==2&&reverse[1]==1){
        autoRun();
        return;
    }
    resetClick(x);
    myShow();
    game_lock[1]=0;

}

void Game::endFall0(){
    //std::cout<<"endFall 0\n";
    int x=0;
    myShow();
    if(doFall(x)==0)
        return;
    else if(checkEliminate(x,1)==1){
        doEliminate(x);
        doFall(x);
    }
    else
        game_lock[0]=0;
}

void Game::endFall1(){
    //std::cout<<"endFall 1\n";
    int x=1;
    myShow();
    if(doFall(x)==0)
        return;
    else if(checkEliminate(x,1)==1){
        doEliminate(x);
        doFall(x);
    }
    else{
        game_lock[1]=0;
        if(player[1].open==2&&reverse[1]==1){
            resetClick(x);
            autoRun();
            return;
        }
    }
}

//when bottun is clicked
void Game::doClicked(int n){
//    std::cout<<n<<"\n";
    int x=0,y=0,z=0;
    x=n/100%10;
    if(player[x].open!=1)
        return;
    if(game_lock[x]==1)
        return;
    if(checkLose(1-x)==1||checkLose(x)==1||player[x].score>=point_for_win){
        game_over();
        return;
    }
    else if(player[1-x].score>=point_for_win){
        game_lock[x]=1;
        return;
    }

    y=n/10%10;
    z=n%10;

    if(((pb[x][y][z].pic%10)>=2&&(pb[x][y][z].pic%10)<=7)||pb[x][y][z].pic==40){
        while(player[0].attack>player[0].attack_num&&player[1].open!=0){
            player[0].attack-=player[0].attack_num;
            doAttack(1);
            myShow();
        }
        while(player[1].attack>player[1].attack_num&&player[0].open!=0){
            player[1].attack-=player[1].attack_num;
            doAttack(0);
            myShow();
        }
        game_lock[x]=1;
        pb[x][y][z].click=1;
        reverse[x]=0;
        checkClick(x);       
    }

    myShow();
}

//when bottun is clicked
void Game::doClicked2(int n){
//    std::cout<<n<<"\n";
    int x=0,y=0,z=0;
    x=n/100%10;
//    if(game_lock[0]==1)
//        return;
//    if(game_lock[1]==1){
//        std::cout<<"game_lock[1]==1\n";
//        return;
//    }
//    if(player[1].open==0)
//        return;

//    if(checkLose(1-x)==1||checkLose(x)==1||player[x].score>=point_for_win){
//        game_over();
//        return;
//    }
//    else if(player[1-x].score>=point_for_win){
//        game_lock[x]=1;
//        return;
//    }

    y=n/10%10;
    z=n%10;

    if((pb[x][y][z].pic%10)>=2&&(pb[x][y][z].pic%10)<=7){
        while(player[0].attack>player[0].attack_num&&player[1].open!=0){
            player[0].attack-=player[0].attack_num;
            doAttack(1);
            myShow();
        }
        while(player[1].attack>player[1].attack_num&&player[0].open!=0){
            player[1].attack-=player[1].attack_num;
            doAttack(0);
            myShow();
        }
        game_lock[x]=1;
        pb[x][y][z].click=1;
        reverse[x]=0;
        checkClick(x);
    }

    myShow();
}

void Game::on_pushbutton_one_player_clicked(){
    ui->label_winner->setText(0);
    if(game_lock[0]==1||game_lock[1]==1)
        return;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            pb[0][i][j].pic=0;
            pb[1][i][j].pic=0;
        }
    }
    resetClick(0);
    resetElm(0);
    resetClick(1);
    resetElm(1);

    QString s;
    Player *p1;
    p1 = new Player_player1;
    s=p1->getName();

    ui->label_name0->setText(s);//text
    ui->label_name0->setFont(QFont("Calibri",30));//style size
    ui->label_name0->setAlignment(Qt::AlignCenter);//center
    ui->label_name0->setStyleSheet("QLabel{color : white;}");//color

    ui->label_name1->setText(0);//text

    player[0].score=0;
    player[0].attack=0;
    player[0].open=1;
    player[0].score_per_move=0;
    move[0]=0;
    player[1].score=0;
    player[1].attack=0;
    player[1].open=0;
    player[1].score_per_move=0;
    move[1]=0;

    giveStartBlock(0);

    myShow();
}

void Game::on_pushbutton_two_player_clicked(){
    ui->label_winner->setText(0);
    if(game_lock[0]==1||game_lock[1]==1)
        return;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            pb[0][i][j].pic=0;
            pb[1][i][j].pic=0;
        }
    }
    resetClick(0);
    resetElm(0);
    resetClick(1);
    resetElm(1);

    QString s;
    Player *p1,*p2;
    p1 = new Player_player1;
    s=p1->getName();

    ui->label_name0->setText(s);//text
    ui->label_name0->setFont(QFont("Calibri",30));//style size
    ui->label_name0->setAlignment(Qt::AlignCenter);//center
    ui->label_name0->setStyleSheet("QLabel{color : white;}");//color

    p2 = new Player_player2;
    s=p2->getName();

    ui->label_name1->setText(s);//text
    ui->label_name1->setFont(QFont("Calibri",30));//style size
    ui->label_name1->setAlignment(Qt::AlignCenter);//center
    ui->label_name1->setStyleSheet("QLabel{color : white;}");//color

    player[0].score=0;
    player[0].attack=0;
    player[0].open=1;
    player[0].score_per_move=0;
    move[0]=0;
    player[1].score=0;
    player[1].attack=0;
    player[1].open=1;
    player[1].score_per_move=0;
    move[1]=0;

    giveStartBlock(2);
    myShow();
}

void Game::on_pushbutton_com1_clicked(){
    ui->label_winner->setText(0);
//    if(game_lock[0]==1||game_lock[1]==1)
//        return;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            pb[0][i][j].pic=0;
            pb[1][i][j].pic=0;
        }
    }
    resetClick(0);
    resetElm(0);
    resetClick(1);
    resetElm(1);

    QString s;
    Player *p1,*p2;
    p1 = new Player_player1;
    s=p1->getName();

    ui->label_name0->setText(s);//text
    ui->label_name0->setFont(QFont("Calibri",30));//style size
    ui->label_name0->setAlignment(Qt::AlignCenter);//center
    ui->label_name0->setStyleSheet("QLabel{color : white;}");//color

    p2 = new Player_computer;
    s=p2->getName();

    ui->label_name1->setText(s);//text
    ui->label_name1->setFont(QFont("Calibri",25));//style size
    ui->label_name1->setAlignment(Qt::AlignCenter);//center
    ui->label_name1->setStyleSheet("QLabel{color : white;}");//color

    player[0].score=0;
    player[0].attack=0;
    player[0].open=1;
    player[0].score_per_move=0;
    move[0]=0;

    player[1].score=0;
    player[1].attack=0;
    player[1].open=2;
    player[1].score_per_move=0;
    move[1]=1;

    giveStartBlock(2);
    myShow();

    autoRun(1);
}

void Game::on_quit_clicked()
{
    if(player[0].score_per_move>=15)        high_star=3;
    else if(player[0].score_per_move>=9)    high_star=2;
    else if(player[0].score_per_move>=3)    high_star=1;
    else if(player[0].score_per_move<3)     high_star=0;

    high_score=1000*player[0].score_per_move;

    this->close();
    emit quit(high_star,high_score);
}


