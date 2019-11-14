#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//#include "mycircle.h"

#include <QMainWindow>
#include<mycircle.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    MyCircle *c;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
