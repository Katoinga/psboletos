#include "editpasajero.h"
#include "ui_editpasajero.h"

editPasajero::editPasajero(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editPasajero)
{
    ui->setupUi(this);
}

editPasajero::~editPasajero()
{
    delete ui;
}
