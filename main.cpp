#include "mainwindow.h"
#include <QApplication>
#include "test_gui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    test_gui t;
    t.show();

    return a.exec();
}
