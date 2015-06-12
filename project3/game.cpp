#include "game.h"
#include "ui_game.h"

Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);

    srand((unsigned)time(NULL));

    QPixmap white("../pic/white.jpg");
    QPixmap red("../pic/red.jpg");
    QPixmap orange("../pic/orange.jpg");
    QPixmap yellow("../pic/yellow.jpg");
    QPixmap green("../pic/green.jpg");
    QPixmap blue("../pic/blue.jpg");
    QPixmap purple("../pic/purple.jpg");
    QPixmap de_around("../pic/de_around.jpg");
    QPixmap de_column("../pic/de_column.jpg");
    QPixmap de_row("../pic/de_row.jpg");
    QPixmap de_same_color("../pic/de_same_color.jpg");

    pic[1]=white;pic[2]=red;pic[3]=orange;pic[4]=yellow;
    pic[5]=green;pic[6]=blue;pic[7]=purple;pic[8]=de_around;
    pic[9]=de_column;pic[10]=de_row;pic[11]=de_same_color;

    signalMapper = new QSignalMapper(this);
    {
    //connect button click

        connect(ui->pb000, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb000,0);
        connect(ui->pb001, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb001,1);
        connect(ui->pb002, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb002,2);
        connect(ui->pb003, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb003,3);
        connect(ui->pb004, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb004,4);
        connect(ui->pb005, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb005,5);
        connect(ui->pb006, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb006,6);
        connect(ui->pb007, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb007,7);
        connect(ui->pb008, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb008,8);
        connect(ui->pb009, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb009,9);
        connect(ui->pb010, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb010,10);
        connect(ui->pb011, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb011,11);
        connect(ui->pb012, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb012,12);
        connect(ui->pb013, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb013,13);
        connect(ui->pb014, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb014,14);
        connect(ui->pb015, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb015,15);
        connect(ui->pb016, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb016,16);
        connect(ui->pb017, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb017,17);
        connect(ui->pb018, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb018,18);
        connect(ui->pb019, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb019,19);
        connect(ui->pb020, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb020,20);
        connect(ui->pb021, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb021,21);
        connect(ui->pb022, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb022,22);
        connect(ui->pb023, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb023,23);
        connect(ui->pb024, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb024,24);
        connect(ui->pb025, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb025,25);
        connect(ui->pb026, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb026,26);
        connect(ui->pb027, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb027,27);
        connect(ui->pb028, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb028,28);
        connect(ui->pb029, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb029,29);
        connect(ui->pb030, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb030,30);
        connect(ui->pb031, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb031,31);
        connect(ui->pb032, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb032,32);
        connect(ui->pb033, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb033,33);
        connect(ui->pb034, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb034,34);
        connect(ui->pb035, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb035,35);
        connect(ui->pb036, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb036,36);
        connect(ui->pb037, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb037,37);
        connect(ui->pb038, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb038,38);
        connect(ui->pb039, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb039,39);
        connect(ui->pb040, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb040,40);
        connect(ui->pb041, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb041,41);
        connect(ui->pb042, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb042,42);
        connect(ui->pb043, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb043,43);
        connect(ui->pb044, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb044,44);
        connect(ui->pb045, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb045,45);
        connect(ui->pb046, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb046,46);
        connect(ui->pb047, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb047,47);
        connect(ui->pb048, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb048,48);
        connect(ui->pb049, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb049,49);
        connect(ui->pb050, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb050,50);
        connect(ui->pb051, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb051,51);
        connect(ui->pb052, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb052,52);
        connect(ui->pb053, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb053,53);
        connect(ui->pb054, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb054,54);
        connect(ui->pb055, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb055,55);
        connect(ui->pb056, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb056,56);
        connect(ui->pb057, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb057,57);
        connect(ui->pb058, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb058,58);
        connect(ui->pb059, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb059,59);
        connect(ui->pb060, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb060,60);
        connect(ui->pb061, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb061,61);
        connect(ui->pb062, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb062,62);
        connect(ui->pb063, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb063,63);
        connect(ui->pb064, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb064,64);
        connect(ui->pb065, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb065,65);
        connect(ui->pb066, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb066,66);
        connect(ui->pb067, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb067,67);
        connect(ui->pb068, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb068,68);
        connect(ui->pb069, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb069,69);
        connect(ui->pb070, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb070,70);
        connect(ui->pb071, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb071,71);
        connect(ui->pb072, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb072,72);
        connect(ui->pb073, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb073,73);
        connect(ui->pb074, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb074,74);
        connect(ui->pb075, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb075,75);
        connect(ui->pb076, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb076,76);
        connect(ui->pb077, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb077,77);
        connect(ui->pb078, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb078,78);
        connect(ui->pb079, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb079,79);
        connect(ui->pb080, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb080,80);
        connect(ui->pb081, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb081,81);
        connect(ui->pb082, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb082,82);
        connect(ui->pb083, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb083,83);
        connect(ui->pb084, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb084,84);
        connect(ui->pb085, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb085,85);
        connect(ui->pb086, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb086,86);
        connect(ui->pb087, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb087,87);
        connect(ui->pb088, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb088,88);
        connect(ui->pb089, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb089,89);
        connect(ui->pb090, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb090,90);
        connect(ui->pb091, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb091,91);
        connect(ui->pb092, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb092,92);
        connect(ui->pb093, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb093,93);
        connect(ui->pb094, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb094,94);
        connect(ui->pb095, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb095,95);
        connect(ui->pb096, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb096,96);
        connect(ui->pb097, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb097,97);
        connect(ui->pb098, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb098,98);
        connect(ui->pb099, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb099,99);
        connect(ui->pb100, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb100,100);
        connect(ui->pb101, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb101,101);
        connect(ui->pb102, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb102,102);
        connect(ui->pb103, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb103,103);
        connect(ui->pb104, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb104,104);
        connect(ui->pb105, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb105,105);
        connect(ui->pb106, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb106,106);
        connect(ui->pb107, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb107,107);
        connect(ui->pb108, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb108,108);
        connect(ui->pb109, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb109,109);
        connect(ui->pb110, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb110,110);
        connect(ui->pb111, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb111,111);
        connect(ui->pb112, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb112,112);
        connect(ui->pb113, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb113,113);
        connect(ui->pb114, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb114,114);
        connect(ui->pb115, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb115,115);
        connect(ui->pb116, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb116,116);
        connect(ui->pb117, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb117,117);
        connect(ui->pb118, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb118,118);
        connect(ui->pb119, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb119,119);
        connect(ui->pb120, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb120,120);
        connect(ui->pb121, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb121,121);
        connect(ui->pb122, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb122,122);
        connect(ui->pb123, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb123,123);
        connect(ui->pb124, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb124,124);
        connect(ui->pb125, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb125,125);
        connect(ui->pb126, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb126,126);
        connect(ui->pb127, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb127,127);
        connect(ui->pb128, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb128,128);
        connect(ui->pb129, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb129,129);
        connect(ui->pb130, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb130,130);
        connect(ui->pb131, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb131,131);
        connect(ui->pb132, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb132,132);
        connect(ui->pb133, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb133,133);
        connect(ui->pb134, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb134,134);
        connect(ui->pb135, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb135,135);
        connect(ui->pb136, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb136,136);
        connect(ui->pb137, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb137,137);
        connect(ui->pb138, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb138,138);
        connect(ui->pb139, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb139,139);
        connect(ui->pb140, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb140,140);
        connect(ui->pb141, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb141,141);
        connect(ui->pb142, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb142,142);
        connect(ui->pb143, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb143,143);
        connect(ui->pb144, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb144,144);
        connect(ui->pb145, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb145,145);
        connect(ui->pb146, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb146,146);
        connect(ui->pb147, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb147,147);
        connect(ui->pb148, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb148,148);
        connect(ui->pb149, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb149,149);
        connect(ui->pb150, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb150,150);
        connect(ui->pb151, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb151,151);
        connect(ui->pb152, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb152,152);
        connect(ui->pb153, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb153,153);
        connect(ui->pb154, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb154,154);
        connect(ui->pb155, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb155,155);
        connect(ui->pb156, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb156,156);
        connect(ui->pb157, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb157,157);
        connect(ui->pb158, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb158,158);
        connect(ui->pb159, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb159,159);
        connect(ui->pb160, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb160,160);
        connect(ui->pb161, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb161,161);
        connect(ui->pb162, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb162,162);
        connect(ui->pb163, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb163,163);
        connect(ui->pb164, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb164,164);
        connect(ui->pb165, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb165,165);
        connect(ui->pb166, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb166,166);
        connect(ui->pb167, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb167,167);
        connect(ui->pb168, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb168,168);
        connect(ui->pb169, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb169,169);
        connect(ui->pb170, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb170,170);
        connect(ui->pb171, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb171,171);
        connect(ui->pb172, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb172,172);
        connect(ui->pb173, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb173,173);
        connect(ui->pb174, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb174,174);
        connect(ui->pb175, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb175,175);
        connect(ui->pb176, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb176,176);
        connect(ui->pb177, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb177,177);
        connect(ui->pb178, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb178,178);
        connect(ui->pb179, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb179,179);
        connect(ui->pb180, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb180,180);
        connect(ui->pb181, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb181,181);
        connect(ui->pb182, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb182,182);
        connect(ui->pb183, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb183,183);
        connect(ui->pb184, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb184,184);
        connect(ui->pb185, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb185,185);
        connect(ui->pb186, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb186,186);
        connect(ui->pb187, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb187,187);
        connect(ui->pb188, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb188,188);
        connect(ui->pb189, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb189,189);
        connect(ui->pb190, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb190,190);
        connect(ui->pb191, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb191,191);
        connect(ui->pb192, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb192,192);
        connect(ui->pb193, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb193,193);
        connect(ui->pb194, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb194,194);
        connect(ui->pb195, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb195,195);
        connect(ui->pb196, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb196,196);
        connect(ui->pb197, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb197,197);
        connect(ui->pb198, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb198,198);
        connect(ui->pb199, SIGNAL(clicked()), signalMapper, SLOT(map ()));        signalMapper->setMapping (ui->pb199,199);

        connect(signalMapper, SIGNAL(mapped (int)), this, SLOT(doClicked(int)));
    }


    giveStartBlock(2);

    myShow();
}

Game::~Game()
{
    delete ui;
}

//myshow
void Game::myShow(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            setPB(0,i,j,pb[0][i][j].pic);
            setPB(1,i,j,pb[1][i][j].pic);
        }
    }
    show();
}

//
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

//set pushbottun
void Game::setPB(int x, int y, int z, int p){
    switch(x){
        case 0:{
            switch(y){
            case 0:
                switch(z){
                    case 0:ui->pb000->setIcon(pic[p]);break;
                    case 1:ui->pb001->setIcon(pic[p]);break;
                    case 2:ui->pb002->setIcon(pic[p]);break;
                    case 3:ui->pb003->setIcon(pic[p]);break;
                    case 4:ui->pb004->setIcon(pic[p]);break;
                    case 5:ui->pb005->setIcon(pic[p]);break;
                    case 6:ui->pb006->setIcon(pic[p]);break;
                    case 7:ui->pb007->setIcon(pic[p]);break;
                    case 8:ui->pb008->setIcon(pic[p]);break;
                    case 9:ui->pb009->setIcon(pic[p]);break;
                }break;
            case 1:
                switch(z){
                    case 0:ui->pb010->setIcon(pic[p]);break;
                    case 1:ui->pb011->setIcon(pic[p]);break;
                    case 2:ui->pb012->setIcon(pic[p]);break;
                    case 3:ui->pb013->setIcon(pic[p]);break;
                    case 4:ui->pb014->setIcon(pic[p]);break;
                    case 5:ui->pb015->setIcon(pic[p]);break;
                    case 6:ui->pb016->setIcon(pic[p]);break;
                    case 7:ui->pb017->setIcon(pic[p]);break;
                    case 8:ui->pb018->setIcon(pic[p]);break;
                    case 9:ui->pb019->setIcon(pic[p]);break;
                }break;
            case 2:
                switch(z){
                    case 0:ui->pb020->setIcon(pic[p]);break;
                    case 1:ui->pb021->setIcon(pic[p]);break;
                    case 2:ui->pb022->setIcon(pic[p]);break;
                    case 3:ui->pb023->setIcon(pic[p]);break;
                    case 4:ui->pb024->setIcon(pic[p]);break;
                    case 5:ui->pb025->setIcon(pic[p]);break;
                    case 6:ui->pb026->setIcon(pic[p]);break;
                    case 7:ui->pb027->setIcon(pic[p]);break;
                    case 8:ui->pb028->setIcon(pic[p]);break;
                    case 9:ui->pb029->setIcon(pic[p]);break;
                }break;
            case 3:
                switch(z){
                    case 0:ui->pb030->setIcon(pic[p]);break;
                    case 1:ui->pb031->setIcon(pic[p]);break;
                    case 2:ui->pb032->setIcon(pic[p]);break;
                    case 3:ui->pb033->setIcon(pic[p]);break;
                    case 4:ui->pb034->setIcon(pic[p]);break;
                    case 5:ui->pb035->setIcon(pic[p]);break;
                    case 6:ui->pb036->setIcon(pic[p]);break;
                    case 7:ui->pb037->setIcon(pic[p]);break;
                    case 8:ui->pb038->setIcon(pic[p]);break;
                    case 9:ui->pb039->setIcon(pic[p]);break;
                }break;
            case 4:
                switch(z){
                    case 0:ui->pb040->setIcon(pic[p]);break;
                    case 1:ui->pb041->setIcon(pic[p]);break;
                    case 2:ui->pb042->setIcon(pic[p]);break;
                    case 3:ui->pb043->setIcon(pic[p]);break;
                    case 4:ui->pb044->setIcon(pic[p]);break;
                    case 5:ui->pb045->setIcon(pic[p]);break;
                    case 6:ui->pb046->setIcon(pic[p]);break;
                    case 7:ui->pb047->setIcon(pic[p]);break;
                    case 8:ui->pb048->setIcon(pic[p]);break;
                    case 9:ui->pb049->setIcon(pic[p]);break;
                }break;
            case 5:
                switch(z){
                    case 0:ui->pb050->setIcon(pic[p]);break;
                    case 1:ui->pb051->setIcon(pic[p]);break;
                    case 2:ui->pb052->setIcon(pic[p]);break;
                    case 3:ui->pb053->setIcon(pic[p]);break;
                    case 4:ui->pb054->setIcon(pic[p]);break;
                    case 5:ui->pb055->setIcon(pic[p]);break;
                    case 6:ui->pb056->setIcon(pic[p]);break;
                    case 7:ui->pb057->setIcon(pic[p]);break;
                    case 8:ui->pb058->setIcon(pic[p]);break;
                    case 9:ui->pb059->setIcon(pic[p]);break;
                }break;
            case 6:
                switch(z){
                    case 0:ui->pb060->setIcon(pic[p]);break;
                    case 1:ui->pb061->setIcon(pic[p]);break;
                    case 2:ui->pb062->setIcon(pic[p]);break;
                    case 3:ui->pb063->setIcon(pic[p]);break;
                    case 4:ui->pb064->setIcon(pic[p]);break;
                    case 5:ui->pb065->setIcon(pic[p]);break;
                    case 6:ui->pb066->setIcon(pic[p]);break;
                    case 7:ui->pb067->setIcon(pic[p]);break;
                    case 8:ui->pb068->setIcon(pic[p]);break;
                    case 9:ui->pb069->setIcon(pic[p]);break;
                }break;
            case 7:
                switch(z){
                    case 0:ui->pb070->setIcon(pic[p]);break;
                    case 1:ui->pb071->setIcon(pic[p]);break;
                    case 2:ui->pb072->setIcon(pic[p]);break;
                    case 3:ui->pb073->setIcon(pic[p]);break;
                    case 4:ui->pb074->setIcon(pic[p]);break;
                    case 5:ui->pb075->setIcon(pic[p]);break;
                    case 6:ui->pb076->setIcon(pic[p]);break;
                    case 7:ui->pb077->setIcon(pic[p]);break;
                    case 8:ui->pb078->setIcon(pic[p]);break;
                    case 9:ui->pb079->setIcon(pic[p]);break;
                }break;
            case 8:
                switch(z){
                    case 0:ui->pb080->setIcon(pic[p]);break;
                    case 1:ui->pb081->setIcon(pic[p]);break;
                    case 2:ui->pb082->setIcon(pic[p]);break;
                    case 3:ui->pb083->setIcon(pic[p]);break;
                    case 4:ui->pb084->setIcon(pic[p]);break;
                    case 5:ui->pb085->setIcon(pic[p]);break;
                    case 6:ui->pb086->setIcon(pic[p]);break;
                    case 7:ui->pb087->setIcon(pic[p]);break;
                    case 8:ui->pb088->setIcon(pic[p]);break;
                    case 9:ui->pb089->setIcon(pic[p]);break;
                }break;
            case 9:
                switch(z){
                    case 0:ui->pb090->setIcon(pic[p]);break;
                    case 1:ui->pb091->setIcon(pic[p]);break;
                    case 2:ui->pb092->setIcon(pic[p]);break;
                    case 3:ui->pb093->setIcon(pic[p]);break;
                    case 4:ui->pb094->setIcon(pic[p]);break;
                    case 5:ui->pb095->setIcon(pic[p]);break;
                    case 6:ui->pb096->setIcon(pic[p]);break;
                    case 7:ui->pb097->setIcon(pic[p]);break;
                    case 8:ui->pb098->setIcon(pic[p]);break;
                    case 9:ui->pb099->setIcon(pic[p]);break;
                }break;
            }
        }break;
        case 1:{
            switch(y){
            case 0:
                switch(z){
                    case 0:ui->pb100->setIcon(pic[p]);break;
                    case 1:ui->pb101->setIcon(pic[p]);break;
                    case 2:ui->pb102->setIcon(pic[p]);break;
                    case 3:ui->pb103->setIcon(pic[p]);break;
                    case 4:ui->pb104->setIcon(pic[p]);break;
                    case 5:ui->pb105->setIcon(pic[p]);break;
                    case 6:ui->pb106->setIcon(pic[p]);break;
                    case 7:ui->pb107->setIcon(pic[p]);break;
                    case 8:ui->pb108->setIcon(pic[p]);break;
                    case 9:ui->pb109->setIcon(pic[p]);break;
                }break;
            case 1:
                switch(z){
                    case 0:ui->pb110->setIcon(pic[p]);break;
                    case 1:ui->pb111->setIcon(pic[p]);break;
                    case 2:ui->pb112->setIcon(pic[p]);break;
                    case 3:ui->pb113->setIcon(pic[p]);break;
                    case 4:ui->pb114->setIcon(pic[p]);break;
                    case 5:ui->pb115->setIcon(pic[p]);break;
                    case 6:ui->pb116->setIcon(pic[p]);break;
                    case 7:ui->pb117->setIcon(pic[p]);break;
                    case 8:ui->pb118->setIcon(pic[p]);break;
                    case 9:ui->pb119->setIcon(pic[p]);break;
                }break;
            case 2:
                switch(z){
                    case 0:ui->pb120->setIcon(pic[p]);break;
                    case 1:ui->pb121->setIcon(pic[p]);break;
                    case 2:ui->pb122->setIcon(pic[p]);break;
                    case 3:ui->pb123->setIcon(pic[p]);break;
                    case 4:ui->pb124->setIcon(pic[p]);break;
                    case 5:ui->pb125->setIcon(pic[p]);break;
                    case 6:ui->pb126->setIcon(pic[p]);break;
                    case 7:ui->pb127->setIcon(pic[p]);break;
                    case 8:ui->pb128->setIcon(pic[p]);break;
                    case 9:ui->pb129->setIcon(pic[p]);break;
                }break;
            case 3:
                switch(z){
                    case 0:ui->pb130->setIcon(pic[p]);break;
                    case 1:ui->pb131->setIcon(pic[p]);break;
                    case 2:ui->pb132->setIcon(pic[p]);break;
                    case 3:ui->pb133->setIcon(pic[p]);break;
                    case 4:ui->pb134->setIcon(pic[p]);break;
                    case 5:ui->pb135->setIcon(pic[p]);break;
                    case 6:ui->pb136->setIcon(pic[p]);break;
                    case 7:ui->pb137->setIcon(pic[p]);break;
                    case 8:ui->pb138->setIcon(pic[p]);break;
                    case 9:ui->pb139->setIcon(pic[p]);break;
                }break;
            case 4:
                switch(z){
                    case 0:ui->pb140->setIcon(pic[p]);break;
                    case 1:ui->pb141->setIcon(pic[p]);break;
                    case 2:ui->pb142->setIcon(pic[p]);break;
                    case 3:ui->pb143->setIcon(pic[p]);break;
                    case 4:ui->pb144->setIcon(pic[p]);break;
                    case 5:ui->pb145->setIcon(pic[p]);break;
                    case 6:ui->pb146->setIcon(pic[p]);break;
                    case 7:ui->pb147->setIcon(pic[p]);break;
                    case 8:ui->pb148->setIcon(pic[p]);break;
                    case 9:ui->pb149->setIcon(pic[p]);break;
                }break;
            case 5:
                switch(z){
                    case 0:ui->pb150->setIcon(pic[p]);break;
                    case 1:ui->pb151->setIcon(pic[p]);break;
                    case 2:ui->pb152->setIcon(pic[p]);break;
                    case 3:ui->pb153->setIcon(pic[p]);break;
                    case 4:ui->pb154->setIcon(pic[p]);break;
                    case 5:ui->pb155->setIcon(pic[p]);break;
                    case 6:ui->pb156->setIcon(pic[p]);break;
                    case 7:ui->pb157->setIcon(pic[p]);break;
                    case 8:ui->pb158->setIcon(pic[p]);break;
                    case 9:ui->pb159->setIcon(pic[p]);break;
                }break;
            case 6:
                switch(z){
                    case 0:ui->pb160->setIcon(pic[p]);break;
                    case 1:ui->pb161->setIcon(pic[p]);break;
                    case 2:ui->pb162->setIcon(pic[p]);break;
                    case 3:ui->pb163->setIcon(pic[p]);break;
                    case 4:ui->pb164->setIcon(pic[p]);break;
                    case 5:ui->pb165->setIcon(pic[p]);break;
                    case 6:ui->pb166->setIcon(pic[p]);break;
                    case 7:ui->pb167->setIcon(pic[p]);break;
                    case 8:ui->pb168->setIcon(pic[p]);break;
                    case 9:ui->pb169->setIcon(pic[p]);break;
                }break;
            case 7:
                switch(z){
                    case 0:ui->pb170->setIcon(pic[p]);break;
                    case 1:ui->pb171->setIcon(pic[p]);break;
                    case 2:ui->pb172->setIcon(pic[p]);break;
                    case 3:ui->pb173->setIcon(pic[p]);break;
                    case 4:ui->pb174->setIcon(pic[p]);break;
                    case 5:ui->pb175->setIcon(pic[p]);break;
                    case 6:ui->pb176->setIcon(pic[p]);break;
                    case 7:ui->pb177->setIcon(pic[p]);break;
                    case 8:ui->pb178->setIcon(pic[p]);break;
                    case 9:ui->pb179->setIcon(pic[p]);break;
                }break;
            case 8:
                switch(z){
                 case 0:ui->pb180->setIcon(pic[p]);break;
                    case 1:ui->pb181->setIcon(pic[p]);break;
                    case 2:ui->pb182->setIcon(pic[p]);break;
                    case 3:ui->pb183->setIcon(pic[p]);break;
                    case 4:ui->pb184->setIcon(pic[p]);break;
                    case 5:ui->pb185->setIcon(pic[p]);break;
                    case 6:ui->pb186->setIcon(pic[p]);break;
                    case 7:ui->pb187->setIcon(pic[p]);break;
                    case 8:ui->pb188->setIcon(pic[p]);break;
                    case 9:ui->pb189->setIcon(pic[p]);break;
                }break;
            case 9:
                switch(z){
                    case 0:ui->pb190->setIcon(pic[p]);break;
                    case 1:ui->pb191->setIcon(pic[p]);break;
                    case 2:ui->pb192->setIcon(pic[p]);break;
                    case 3:ui->pb193->setIcon(pic[p]);break;
                    case 4:ui->pb194->setIcon(pic[p]);break;
                    case 5:ui->pb195->setIcon(pic[p]);break;
                    case 6:ui->pb196->setIcon(pic[p]);break;
                    case 7:ui->pb197->setIcon(pic[p]);break;
                    case 8:ui->pb198->setIcon(pic[p]);break;
                    case 9:ui->pb199->setIcon(pic[p]);break;
                }break;
            }
        }break;
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
    int con;//number of contiune blocks
    int temp;
    int re=0;

    //check row
    for(int i=0;i<10;i++){
        con=1;temp=0;
        for(int j=0;j<10;j++){
            if(temp==pb[x][i][j].pic){
                if(pb[x][i][j].pic>=2&&pb[x][i][j].pic<=7)
                    con++;;
            }
            else{
                if(con>=3){
                    std::cout<<"row: "<<con<<"\n";
                    for(int k=1;k<=con;k++)
                        if(record_elm==1)pb[x][i][j-k].elm=1;
                    re=1;                    
                }
                con=1;
            }
            temp=pb[x][i][j].pic;
        }
        if(con>=3){
            std::cout<<"row: "<<con<<"\n";
            for(int k=1;k<=con;k++)
                if(record_elm==1)pb[x][i][10-k].elm=1;
            re=1;
        }
        con=1;
    }

    //check column
    for(int j=0;j<10;j++){
        con=1;temp=0;
        for(int i=0;i<10;i++){
            if(temp==pb[x][i][j].pic){
                if(pb[x][i][j].pic>=2&&pb[x][i][j].pic<=7)
                    con++;;
            }
            else{
                if(con>=3){
                    std::cout<<"col: "<<con<<"\n";
                    for(int k=1;k<=con;k++)
                        if(record_elm==1)pb[x][i-k][j].elm=1;
                    re=1;
                }
                con=1;
            }
            temp=pb[x][i][j].pic;
        }
        if(con>=3){
            std::cout<<"col: "<<con<<"\n";
            for(int k=1;k<=con;k++)
                if(record_elm==1)pb[x][10-k][j].elm=1;
            re=1;
        }
        con=1;
    }

    return re;
}

void Game::doEliminate(int x){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(pb[x][i][j].elm==1){
                pb[x][i][j].pic=0;
            }
        }
    }
    show();
}
void Game::checkClick(int x){
    int count_clicked=0;
    int x1,x2,y1,y2,z1,z2;
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
    std::cout<<"check"<<x1<<" "<<y1<<" "<<z1<<" && "<<x2<<" "<<y2<<" "<<z2<<"\n";
    if(count_clicked!=2){
        std::cout<<"only one clicked\n";
        return;
    }
    if(x1!=x2){
        std::cout<<"x1!=x2\n";
        resetClick(x);
        return;
    }

    else if(abs(y1-y2)+abs(z1-z2)>1){
        std::cout<<"cant change\n";
        resetClick(x);
        return;
    }
    else{
        doChaange(x1,y1,z1,x2,y2,z2);
        checkEliminate(x,1);
        doEliminate(x);
        resetClick(x);
    }
}

void Game::resetClick(int x){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            pb[x][i][j].click=0;
        }
    }
}

void Game::doChaange(int x1,int y1,int z1,int x2,int y2,int z2){
    std::cout<<"change"<<x1<<" "<<y1<<" "<<z1<<" && "<<x2<<" "<<y2<<" "<<z2<<"\n";
    int temp;
    temp=pb[x1][y1][z1].pic;
    pb[x1][y1][z1].pic=pb[x2][y2][z2].pic;
    pb[x2][y2][z2].pic=temp;
    resetClick(x1);
    myShow();
}

//when bottun is clicked
void Game::doClicked(int n){
    std::cout<<n<<"\n";
    int x=0,y=0,z=0;
    x=n/100%10;
    y=n/10%10;
    z=n%10;
    if(pb[x][y][z].pic>=2&&pb[x][y][z].pic<=7){
        pb[x][y][z].click=1;
        checkClick(x);
    }
    else if(pb[x][y][z].pic==8);
    else if(pb[x][y][z].pic==9);
    else if(pb[x][y][z].pic==10);
    else if(pb[x][y][z].pic==11);

    myShow();
}
