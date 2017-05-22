#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readAccount(acc,1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_submit_clicked()
{
    QString uacc = ui->input_acc->text();
    QString upass = ui->input_pass->text();
    int stat = 0;
    ACCOUNT *tacc;
    for (int i=0;i<acc.size();i++){
        ACCOUNT *t = acc[i];
        QString cacc = t->getName();
        if (uacc==cacc){
            tacc = acc[i];
            stat = 1;
            break;
        }
    }
    QString cacc = tacc->getName();
    QString cpass = tacc->getPass();
    if (stat == 0){
        ui->status->setText("Wrong Account!");
        return;
    }
    if (stat == 1){
        if (upass==cpass){
            ui->status->setText("Loged in!");
        }
        else{
            ui->status->setText("Wrong Password!");
        }
    }
}

void MainWindow::on_quit_clicked()
{
    this->close();
}
