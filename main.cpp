#include "mainwindow.h"

#include <QFontDatabase>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setFont(QFont(":/fontawesome-webfont.ttf"));

    MainWindow w;
    w.showMaximized();
    
    return a.exec();
}
