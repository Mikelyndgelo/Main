#include "mainwindow.h"
#include <QApplication>
#include<QtWidgets>
#include"counter.h"
//Написать программу с двумя кнопками, нажимаем первую- показывается 1, вторую 2
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Counter counter;
    counter.show();




    return app.exec();
}
