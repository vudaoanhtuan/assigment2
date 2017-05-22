#include "mainwindow.h"
#include <QApplication>
#include "test_read_write.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    testWriteData();

    MainWindow w;
    w.show();
    return a.exec();
}
