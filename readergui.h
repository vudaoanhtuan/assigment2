#ifndef READERGUI_H
#define READERGUI_H

#include <QMainWindow>
#include "read_data.h"

namespace Ui {
class ReaderGui;
}

class ReaderGui : public QMainWindow
{
    Q_OBJECT

public:
    vector<BOOK*> book;
    vector<Reader*> reader;
    NUMDATA numData;
    long long accountId;
    long long userId;
    explicit ReaderGui(QWidget *parent = 0);
    ~ReaderGui();
    void setAccountId(long long id);
    void setUserId(long long id);

private:
    Ui::ReaderGui *ui;
};

#endif // READERGUI_H
