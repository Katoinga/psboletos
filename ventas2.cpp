#include "ventas2.h"
#include "ui_ventas2.h"

ventas2::ventas2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventas2)
{
    ui->setupUi(this);
}

ventas2::~ventas2()
{
    delete ui;
}
