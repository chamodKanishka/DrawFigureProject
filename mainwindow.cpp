#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mycircle.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    c = new MyCircle(0, this);
    ui->setupUi(this);
    ui->layout->addWidget(c);
    QObject::connect(ui->hSlider,SIGNAL(valueChanged(int)),c,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
