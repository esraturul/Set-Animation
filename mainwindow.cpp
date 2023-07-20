#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Animation1 =new QPropertyAnimation(ui->pushButton,"geometry");
    Animation1->setDuration(500);

    Animation2 =new QPropertyAnimation(ui->pushButton_2,"geometry");
    Animation2->setDuration(500);


    Animation3 =new QPropertyAnimation(ui->pushButton_3,"geometry");
    Animation3->setDuration(500);


    Animation4 =new QPropertyAnimation(ui->pushButton_4,"geometry");
    Animation4->setDuration(500);


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_Start_Animation_clicked()
{
    Animation1->setStartValue(ui->pushButton->geometry());
    Animation1->setEndValue(ui->pushButton_4->geometry());

    Animation2->setStartValue(ui->pushButton_2->geometry());
    Animation2->setEndValue(ui->pushButton_3->geometry());

    Animation3->setStartValue(ui->pushButton_3->geometry());
    Animation3->setEndValue(ui->pushButton->geometry());

    Animation4->setStartValue(ui->pushButton_4->geometry());
    Animation4->setEndValue(ui->pushButton_2->geometry());


    Animation1->start();
    Animation2->start();
    Animation3->start();
    Animation4->start();

}

