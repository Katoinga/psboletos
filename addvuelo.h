#ifndef ADDVUELO_H
#define ADDVUELO_H

#include <QDialog>

namespace Ui {
class addvuelo;
}

class addvuelo : public QDialog
{
    Q_OBJECT

public:
    explicit addvuelo(QWidget *parent = nullptr);
    ~addvuelo();

private:
    Ui::addvuelo *ui;
};

#endif // ADDVUELO_H
