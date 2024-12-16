#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    second = new SecondWindow;
    second->show();

    connect(this, &MainWindow::mainSignal, second, &SecondWindow::secondSlot);
    connect(second, &SecondWindow::secondSignal, this, &MainWindow::mainSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    emit mainSignal(ui->lineEdit->text());
}

void MainWindow::mainSlot(QString str)
{
    ui->label->setText(str);
}

