#include "loginuser.h"
#include "ui_loginuser.h"

loginUser::loginUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginUser)
{
    ui->setupUi(this);
}

loginUser::~loginUser()
{
    delete ui;
}
