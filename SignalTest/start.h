#ifndef START_H
#define START_H

#include <game.h>
#include <QWidget>

namespace Ui {
class Start;
}

class Start : public QWidget
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = 0);
    ~Start();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Start *ui;
    Game g;
};

#endif // START_H
