#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /*int bok= ui->lineEdit->text().toInt();
    int pole= pow(bok,2);
    ui->lineEdit_2->setText(QString::number(pole));*/
    ui->lineEdit_2->setText(QString::number(pow(ui->lineEdit->text().toInt(),2)));
}

void MainWindow::on_Przycisk_clicked()
{
    ui->Okno2->setText(QString::number(ui->Okno1->text().toInt()*2));
}

void MainWindow::on_oblicz_clicked()
{
    if (ui->operacja->currentIndex()== 0)
    ui->wynik->setText(QString::number(ui->a->text().toFloat() + ui->b->text().toFloat() ));
    if (ui->operacja->currentIndex()== 1)
    ui->wynik->setText(QString::number(ui->a->text().toFloat() - ui->b->text().toFloat() ));
    if (ui->operacja->currentIndex()== 2)
    ui->wynik->setText(QString::number(ui->a->text().toFloat() / ui->b->text().toFloat() ));
    if (ui->operacja->currentIndex()== 3)
    ui->wynik->setText(QString::number(ui->a->text().toFloat() * ui->b->text().toFloat() ));

}


void MainWindow::on_autor_toggled(bool checked)
{
    ui->nazwisko->setText("Michal J. Sidor");
}
