#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

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

void MainWindow::on_checkBox_clicked()
{
    if (ui->checkBox->checkState()) ui->label->setText("J Sidor");
    else ui->label->setText("???");
}

void MainWindow::on_calendarWidget_clicked(const QDate &date)
{

    ui->label2->setText(date.toString());
    //ui->label2->setText(QDate.day().toString());
}

void MainWindow::on_horizontalScrollBar_actionTriggered(int action)
{
    ui->label_2->setText(QString::number(ui->horizontalScrollBar->value()));
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    if (ui->comboBox->currentIndex()==0) ui->textEdit->setStyleSheet(" ");
    if (ui->comboBox->currentIndex()==1) ui->textEdit->setStyleSheet("color: rgb(255, 0, 0); background-color: rgb(255, 255, 0);");


}

void MainWindow::on_pushButton_clicked()
{
    //ui->textEdit->append("123");
    //ui->textEdit->append(ui->lineEdit->text().toStdString());
}
