#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionIr_4_triggered();

    void on_actionIr_3_triggered();

    void on_actionIr_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
