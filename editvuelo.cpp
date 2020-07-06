#include "editvuelo.h"
#include "ui_editvuelo.h"

editvuelo::editvuelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editvuelo)
{
    ui->setupUi(this);
}

editvuelo::~editvuelo()
{
    delete ui;
}
