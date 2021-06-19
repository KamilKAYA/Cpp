#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "communication.h"

Communication myCom;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_getClass_clicked()
{
    int x=myCom.GetTopClass();
    ui->result->setText("Result of Label :"+QString::number(x));

}

void MainWindow::on_getDeepClass_clicked()
{
    int x=myCom.GetClass();
    ui->result->setText("Result of Label :"+QString::number(x));
}
