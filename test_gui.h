#ifndef TEST_GUI_H
#define TEST_GUI_H

#include <QWidget>

namespace Ui {
class test_gui;
}

class test_gui : public QWidget
{
    Q_OBJECT

public:
    explicit test_gui(QWidget *parent = 0);
    ~test_gui();

private:
    Ui::test_gui *ui;
};

#endif // TEST_GUI_H
