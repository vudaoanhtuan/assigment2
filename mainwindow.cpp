#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "readergui.h"

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
    ACCOUNT *currentAcc;
    for (int i=0;i<acc.size();i++){
        ACCOUNT *t = acc[i];
        QString cacc = t->getName();
        if (uacc==cacc){
            currentAcc = acc[i];
            stat = 1;
            break;
        }
    }
    QString cacc = currentAcc->getName();
    QString cpass = currentAcc->getPass();
    if (stat == 0){
        ui->status->setText("Wrong Account!");
        return;
    }
    if (stat == 1){
        if (upass==cpass){
            ui->status->setText("Loged in!");
            ReaderGui *rgui = new ReaderGui;
            rgui->setUserId(currentAcc->getUserId());
            rgui->setAccountId(currentAcc->getId());
            rgui->show();
            this->close();

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
