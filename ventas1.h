#ifndef VENTAS1_H
#define VENTAS1_H

#include <QDialog>

namespace Ui {
class Ventas1;
}

class Ventas1 : public QDialog
{
    Q_OBJECT

public:
    explicit Ventas1(QWidget *parent = nullptr);
    ~Ventas1();

private:
    Ui::Ventas1 *ui;
};

#endif // VENTAS1_H
