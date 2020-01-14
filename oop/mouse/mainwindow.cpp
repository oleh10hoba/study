#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "obszarrysowania.h"
#include "QDebug"
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
void MainWindow::on_pushButton_1_clicked()
{
    ui->obszar_rysowania->setColor1();
}
void MainWindow::on_pushButton_2_clicked()
{
    ui->obszar_rysowania->setColor2();
}
void MainWindow::on_pushButton_3_clicked()
{
    ui->obszar_rysowania->setColor3();
}
void MainWindow::on_pushButton_4_clicked()
{
    ui->obszar_rysowania->setColor4();
}
void MainWindow::on_pushButton_5_clicked()
{
    ui->obszar_rysowania->delImage();
}
void MainWindow::on_actionZapisz_Jako_triggered()
{
    ui->obszar_rysowania->save();
}
