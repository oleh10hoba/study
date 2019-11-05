/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *LiczbaLabel;
    QLabel *WynikLabel;
    QLineEdit *Okno1;
    QLineEdit *Okno2;
    QPushButton *Przycisk;
    QLineEdit *a;
    QLineEdit *b;
    QLineEdit *wynik;
    QComboBox *operacja;
    QCheckBox *autor;
    QPushButton *oblicz;
    QLabel *nazwisko;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 121, 32));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 20, 113, 32));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 20, 88, 34));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 131, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 0, 101, 18));
        LiczbaLabel = new QLabel(centralWidget);
        LiczbaLabel->setObjectName(QString::fromUtf8("LiczbaLabel"));
        LiczbaLabel->setGeometry(QRect(20, 60, 91, 18));
        WynikLabel = new QLabel(centralWidget);
        WynikLabel->setObjectName(QString::fromUtf8("WynikLabel"));
        WynikLabel->setGeometry(QRect(250, 60, 59, 18));
        Okno1 = new QLineEdit(centralWidget);
        Okno1->setObjectName(QString::fromUtf8("Okno1"));
        Okno1->setGeometry(QRect(10, 80, 113, 32));
        Okno2 = new QLineEdit(centralWidget);
        Okno2->setObjectName(QString::fromUtf8("Okno2"));
        Okno2->setGeometry(QRect(250, 80, 113, 32));
        Okno2->setReadOnly(true);
        Przycisk = new QPushButton(centralWidget);
        Przycisk->setObjectName(QString::fromUtf8("Przycisk"));
        Przycisk->setGeometry(QRect(140, 80, 88, 34));
        a = new QLineEdit(centralWidget);
        a->setObjectName(QString::fromUtf8("a"));
        a->setGeometry(QRect(10, 160, 61, 32));
        b = new QLineEdit(centralWidget);
        b->setObjectName(QString::fromUtf8("b"));
        b->setGeometry(QRect(150, 160, 51, 32));
        wynik = new QLineEdit(centralWidget);
        wynik->setObjectName(QString::fromUtf8("wynik"));
        wynik->setGeometry(QRect(290, 160, 81, 32));
        operacja = new QComboBox(centralWidget);
        operacja->setObjectName(QString::fromUtf8("operacja"));
        operacja->setGeometry(QRect(80, 160, 51, 32));
        autor = new QCheckBox(centralWidget);
        autor->setObjectName(QString::fromUtf8("autor"));
        autor->setGeometry(QRect(150, 130, 111, 22));
        oblicz = new QPushButton(centralWidget);
        oblicz->setObjectName(QString::fromUtf8("oblicz"));
        oblicz->setGeometry(QRect(210, 160, 61, 34));
        nazwisko = new QLabel(centralWidget);
        nazwisko->setObjectName(QString::fromUtf8("nazwisko"));
        nazwisko->setGeometry(QRect(280, 130, 121, 18));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        operacja->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Oblicz", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Podaj bok kwadratu", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Pole kwadratu:", 0, QApplication::UnicodeUTF8));
        LiczbaLabel->setText(QApplication::translate("MainWindow", "Podaj liczbe", 0, QApplication::UnicodeUTF8));
        WynikLabel->setText(QApplication::translate("MainWindow", "Liczba * 2 ", 0, QApplication::UnicodeUTF8));
        Przycisk->setText(QApplication::translate("MainWindow", "Pomn\303\263\305\274", 0, QApplication::UnicodeUTF8));
        operacja->clear();
        operacja->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8)
        );
        autor->setText(QApplication::translate("MainWindow", "Poka\305\274 autora", 0, QApplication::UnicodeUTF8));
        oblicz->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        nazwisko->setText(QApplication::translate("MainWindow", "???", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
