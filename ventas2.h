#ifndef VENTAS2_H
#define VENTAS2_H

#include <QDialog>

namespace Ui {
class ventas2;
}

class ventas2 : public QDialog
{
    Q_OBJECT

public:
    explicit ventas2(QWidget *parent = nullptr);
    ~ventas2();

private:
    Ui::ventas2 *ui;
};

#endif // VENTAS2_H
