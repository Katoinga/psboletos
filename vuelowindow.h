#ifndef VUELOWINDOW_H
#define VUELOWINDOW_H

#include <QMainWindow>

namespace Ui {
class vuelowindow;
}

class vuelowindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit vuelowindow(QWidget *parent = nullptr);
    ~vuelowindow();

private:
    Ui::vuelowindow *ui;
};

#endif // VUELOWINDOW_H
