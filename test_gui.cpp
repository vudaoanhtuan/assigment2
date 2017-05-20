#include "test_gui.h"
#include "ui_test_gui.h"
#include "read_data.h"
#include "test_read_write.h"


test_gui::test_gui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test_gui)
{
    ui->setupUi(this);
//    testReadData();
    vector<USER*> user;
    readUser(user,3);
    ui->lb1->setText(QString::number(user[0]->getCode()));
}

test_gui::~test_gui()
{
    delete ui;
}
