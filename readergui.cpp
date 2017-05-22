#include "readergui.h"
#include "ui_readergui.h"

ReaderGui::ReaderGui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReaderGui)
{
    ui->setupUi(this);
    readNum(numData);
    readBook(book,numData.numBook);
    readReader(reader,numData.numReader);

    for (int i=0;i<numData.numBook;i++){
        QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
        BOOK *t = book[i];
        item->setText(0, t->getTitle());
        item->setText(1, t->getAuthor());
        item->setText(2, t->getCatagory());
        item->setText(3, t->getPublisher());
        item->setText(4, QString::number(t->getYear()));
    }

}

ReaderGui::~ReaderGui()
{
    delete ui;
}

void ReaderGui::setAccountId(long long id){
    accountId = id;
}

void ReaderGui::setUserId(long long id){
    userId = id;
}
