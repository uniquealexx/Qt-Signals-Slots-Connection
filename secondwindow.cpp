#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::secondSlot(QString str)
{
    ui->label->setText(str);
}

void SecondWindow::on_pushButton_clicked()
{
    emit secondSignal(ui->lineEdit->text());
}

