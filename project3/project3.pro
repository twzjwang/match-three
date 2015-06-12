#-------------------------------------------------
#
# Project created by QtCreator 2015-06-06T13:51:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project3
TEMPLATE = app


SOURCES += main.cpp\
        game.cpp \
    block.cpp \
    start.cpp

HEADERS  += game.h \
    block.h \
    start.h

FORMS    += game.ui \
    start.ui

DISTFILES += \
    StartForm.ui.qml
