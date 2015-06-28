#-------------------------------------------------
#
# Project created by QtCreator 2015-06-02T05:44:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SignalTest
TEMPLATE = app


SOURCES += main.cpp\
    signalwindow.cpp \
    signaldialog.cpp \
    block.cpp \
    game.cpp \
    player.cpp \
    start.cpp

HEADERS  += signalwindow.h \
    signaldialog.h \
    block.h \
    game.h \
    player.h \
    player_computer.h \
    player_player1.h \
    player_player2.h \
    start.h

FORMS    += signalwindow.ui \
    signaldialog.ui \
    game.ui \
    start.ui
