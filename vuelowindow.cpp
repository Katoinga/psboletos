#include "vuelowindow.h"
#include "ui_vuelowindow.h"

vuelowindow::vuelowindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::vuelowindow)
{
    ui->setupUi(this);
}

vuelowindow::~vuelowindow()
{
    delete ui;
}
