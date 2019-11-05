#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    ui->lineEdit->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->wynikObwod->setText("");
    ui->wynikPole->setText("");
    ui->wynikObjetosc->setText("");
    ui->lineEdit_2->setText("");

    if (ui->comboBox->currentIndex() == 0)
    {
        ui->label_5->setText("");
        ui->label_6->setText("");
        ui->label_7->setText("");

        ui->lineEdit->setEnabled(0);
        ui->lineEdit_4->setEnabled(0);
        ui->lineEdit_5->setEnabled(0);

        ui->label_2->setEnabled(0);
        ui->label_3->setEnabled(0);
        ui->label_4->setEnabled(0);
        ui->label_5->setEnabled(0);
        ui->label_6->setEnabled(0);
        ui->label_7->setEnabled(0);
        ui->pushButton->setEnabled(0);
        ui->wynikObwod->setEnabled(0);
        ui->wynikPole->setEnabled(0);

        ui->label_8->setEnabled(0);
        ui->label_9->setEnabled(0);
        ui->lineEdit_2->setEnabled(0);
        ui->wynikObjetosc->setEnabled(0);

        ui->checkBox->setChecked(0);
    }

    else
    {
        ui->label_2->setEnabled(1);
        ui->label_3->setEnabled(1);
        ui->label_4->setEnabled(1);
        ui->label_5->setEnabled(1);
        ui->label_6->setEnabled(1);
        ui->label_7->setEnabled(1);
        ui->pushButton->setEnabled(1);
        ui->wynikObwod->setEnabled(1);
        ui->wynikPole->setEnabled(1);
    }

    if (ui->comboBox->currentIndex() == 1)
    {
        ui->label_5->setText("a");
        ui->label_6->setText("");
        ui->label_7->setText("");

        ui->lineEdit->setEnabled(1);
        ui->lineEdit_4->setEnabled(0);
        ui->lineEdit_5->setEnabled(0);

    }

    if (ui->comboBox->currentIndex() == 2)
    {
        ui->label_5->setText("a");
        ui->label_6->setText("b");
        ui->label_7->setText("");

        ui->lineEdit->setEnabled(1);
        ui->lineEdit_4->setEnabled(1);
        ui->lineEdit_5->setEnabled(0);

    }

    if (ui->comboBox->currentIndex() == 3)
    {
        ui->label_5->setText("a");
        ui->label_6->setText("h");
        ui->label_7->setText("");

        ui->lineEdit->setEnabled(1);
        ui->lineEdit_4->setEnabled(1);
        ui->lineEdit_5->setEnabled(0);
    }

    if (ui->comboBox->currentIndex() == 4)
    {
        ui->label_5->setText("r");
        ui->label_6->setText("");
        ui->label_7->setText("");

        ui->lineEdit->setEnabled(1);
        ui->lineEdit_4->setEnabled(0);
        ui->lineEdit_5->setEnabled(0);



    }

    if (ui->comboBox->currentIndex() == 5)
    {
        ui->label_5->setText("a");
        ui->label_6->setText("b");
        ui->label_7->setText("h");

        ui->lineEdit->setEnabled(1);
        ui->lineEdit_4->setEnabled(1);
        ui->lineEdit_5->setEnabled(1);
    }

}

void MainWindow::on_pushButton_clicked()
{

    if (ui->comboBox->currentIndex() == 1)
    {
        ui->wynikPole->setText(QString::number(pow(ui->lineEdit->text().toDouble(),2)));
        ui->wynikObwod->setText(QString::number(ui->lineEdit->text().toDouble() * 4));

        if (ui->lineEdit->text().toDouble() == 0)
        {
            ui->wynikPole->setText("-");
            ui->wynikObwod->setText("-");
        }
    }

    if (ui->comboBox->currentIndex() == 2)
    {
        double a = ui->lineEdit->text().toDouble();
        double b = ui->lineEdit_4->text().toDouble();
        double pole = 0, obwod = 0;
        pole = a * b;
        obwod = (a+b)*2;
        ui->wynikPole->setText(QString::number(pole));
        ui->wynikObwod->setText(QString::number(obwod));

        if (ui->lineEdit->text().toDouble() == 0 or ui->lineEdit_4->text().toDouble() == 0)
        {
            ui->wynikPole->setText("-");
            ui->wynikObwod->setText("-");
        }

    }

    if (ui->comboBox->currentIndex() == 3)
    {
        double a = ui->lineEdit->text().toDouble();
        double h = ui->lineEdit_4->text().toDouble();
        double pole = 0, obwod = 0;
        pole = a * h / 2;
        obwod = a*3 ;
        ui->wynikPole->setText(QString::number(pole));
        ui->wynikObwod->setText(QString::number(obwod));

        if (ui->lineEdit->text().toDouble() == 0 or ui->lineEdit_4->text().toDouble() == 0)
        {
            ui->wynikPole->setText("-");
            ui->wynikObwod->setText("-");
        }
    }

    if (ui->comboBox->currentIndex() == 4)
    {
        double r = ui->lineEdit->text().toDouble();
        double pole = 0, obwod = 0;
        pole = M_PI * pow(r,2);
        obwod = 2 * M_PI * r;
        ui->wynikPole->setText(QString::number(pole));
        ui->wynikObwod->setText(QString::number(obwod));

        if (ui->lineEdit->text().toDouble() == 0)
        {
            ui->wynikPole->setText("-");
            ui->wynikObwod->setText("-");
        }

    }

    if (ui->comboBox->currentIndex() == 5)
    {
        double a = ui->lineEdit->text().toDouble();
        double b = ui->lineEdit_4->text().toDouble();
        double h = ui->lineEdit_5->text().toDouble();

        double pole = 0, obwod = 0;
        pole = (a+b)/2 * h;
        obwod = a+b + sqrt(pow((a-b)/2,2) + pow(h,2));
        ui->wynikPole->setText(QString::number(pole));
        ui->wynikObwod->setText(QString::number(obwod));

        if (ui->lineEdit->text().toDouble() == 0 or ui->lineEdit_4->text().toDouble() == 0 or ui->lineEdit_5->text().toDouble() == 0)
        {
            ui->wynikPole->setText("-");
            ui->wynikObwod->setText("-");
        }
    }

    if (ui->checkBox->checkState())
    {
        double objetosc = 0;
        objetosc = ui->wynikPole->text().toDouble() * ui->lineEdit_2->text().toDouble();
        ui->wynikObjetosc->setText(QString::number(objetosc));
        if (ui->lineEdit_2->text().toDouble() == 0 or ui->wynikPole->text().toDouble() == 0) ui->wynikObjetosc->setText("-");
    }

    else ui->wynikObjetosc->setText("");



}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (ui->checkBox->checkState() and ui->comboBox->currentIndex() != 0)
    {
        ui->label_8->setEnabled(1);
        ui->label_9->setEnabled(1);
        ui->lineEdit_2->setEnabled(1);
        ui->wynikObjetosc->setEnabled(1);
    }

    else
    {
        ui->label_8->setEnabled(0);
        ui->label_9->setEnabled(0);
        ui->lineEdit_2->setEnabled(0);
        ui->wynikObjetosc->setEnabled(0);
    }

    ui->wynikObjetosc->setText("");
    ui->lineEdit_2->setText("");
}


void MainWindow::on_actionAutor_triggered()
{
     QMessageBox::information(this,"Autor","Michał J. Sidor");
}

void MainWindow::on_actionZamknij_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Zamknięcie programu","Czy na pewno chcesz zamknąć program?",
    QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if (reply == QMessageBox::Yes) close();

}
