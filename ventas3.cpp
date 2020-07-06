#include "ventas3.h"
#include "ui_ventas3.h"

ventas3::ventas3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventas3)
{
    ui->setupUi(this);
}

ventas3::~ventas3()
{
    delete ui;
}
