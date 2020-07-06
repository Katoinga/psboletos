#include "ventaswindow.h"
#include "ui_ventaswindow.h"

ventaswindow::ventaswindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventaswindow)
{
    ui->setupUi(this);
}

ventaswindow::~ventaswindow()
{
    delete ui;
}
