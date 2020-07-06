#ifndef LOGINUSER_H
#define LOGINUSER_H

#include <QDialog>

namespace Ui {
class loginUser;
}

class loginUser : public QDialog
{
    Q_OBJECT

public:
    explicit loginUser(QWidget *parent = nullptr);
    ~loginUser();

private:
    Ui::loginUser *ui;
};

#endif // LOGINUSER_H
