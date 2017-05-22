#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "read_data.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    vector<ACCOUNT*> acc;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_submit_clicked();

    void on_quit_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
