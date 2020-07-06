#ifndef EDITPASAJERO_H
#define EDITPASAJERO_H

#include <QDialog>

namespace Ui {
class editPasajero;
}

class editPasajero : public QDialog
{
    Q_OBJECT

public:
    explicit editPasajero(QWidget *parent = nullptr);
    ~editPasajero();

private:
    Ui::editPasajero *ui;
};

#endif // EDITPASAJERO_H
