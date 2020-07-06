#include "addvuelo.h"
#include "ui_addvuelo.h"

addvuelo::addvuelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addvuelo)
{
    ui->setupUi(this);
}

addvuelo::~addvuelo()
{
    delete ui;
}
