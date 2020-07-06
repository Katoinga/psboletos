#ifndef EDITVUELO_H
#define EDITVUELO_H

#include <QDialog>

namespace Ui {
class editvuelo;
}

class editvuelo : public QDialog
{
    Q_OBJECT

public:
    explicit editvuelo(QWidget *parent = nullptr);
    ~editvuelo();

private:
    Ui::editvuelo *ui;
};

#endif // EDITVUELO_H
