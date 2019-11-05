/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAutor;
    QAction *actionZamknij;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *wynikPole;
    QLineEdit *wynikObwod;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QCheckBox *checkBox;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QLineEdit *wynikObjetosc;
    QLabel *label_9;
    QMenuBar *menuBar;
    QMenu *menuPomoc;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(864, 532);
        actionAutor = new QAction(MainWindow);
        actionAutor->setObjectName(QStringLiteral("actionAutor"));
        actionAutor->setCheckable(false);
        actionZamknij = new QAction(MainWindow);
        actionZamknij->setObjectName(QStringLiteral("actionZamknij"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 50, 351, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 181, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(20, 100, 101, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(390, 200, 71, 21));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(20, 240, 51, 16));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(240, 240, 71, 16));
        label_4->setFont(font1);
        wynikPole = new QLineEdit(centralWidget);
        wynikPole->setObjectName(QStringLiteral("wynikPole"));
        wynikPole->setEnabled(false);
        wynikPole->setGeometry(QRect(20, 260, 151, 20));
        wynikPole->setReadOnly(true);
        wynikObwod = new QLineEdit(centralWidget);
        wynikObwod->setObjectName(QStringLiteral("wynikObwod"));
        wynikObwod->setEnabled(false);
        wynikObwod->setGeometry(QRect(240, 260, 131, 20));
        wynikObwod->setReadOnly(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(20, 80, 51, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 80, 61, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 80, 61, 21));
        label_7->setFont(font1);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(20, 150, 821, 41));
        QFont font2;
        font2.setPointSize(12);
        pushButton->setFont(font2);
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(150, 100, 101, 20));
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(270, 100, 101, 20));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(460, 0, 381, 41));
        checkBox->setFont(font);
        checkBox->setChecked(false);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(false);
        label_8->setGeometry(QRect(480, 70, 51, 16));
        label_8->setFont(font1);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(480, 100, 113, 20));
        wynikObjetosc = new QLineEdit(centralWidget);
        wynikObjetosc->setObjectName(QStringLiteral("wynikObjetosc"));
        wynikObjetosc->setEnabled(false);
        wynikObjetosc->setGeometry(QRect(480, 260, 171, 20));
        wynikObjetosc->setReadOnly(true);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setEnabled(false);
        label_9->setGeometry(QRect(480, 230, 81, 31));
        label_9->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 864, 21));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QStringLiteral("menuPomoc"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPomoc->menuAction());
        menuPomoc->addAction(actionAutor);
        menuPomoc->addAction(actionZamknij);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAutor->setText(QApplication::translate("MainWindow", "Autor", nullptr));
        actionZamknij->setText(QApplication::translate("MainWindow", "Zamknij", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "-", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Kwadrat", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Prostok\304\205t", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "Tr\303\263jk\304\205t r\303\263wnoboczny", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "Ko\305\202o", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "Trapez r\303\263wnoramienny", nullptr));

        label->setText(QApplication::translate("MainWindow", "Figura 2D", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Wyniki", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Pole", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Obw\303\263d", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Oblicz", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Figura 3D o 2 podstawach 2D", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "H", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Obj\304\231to\305\233\304\207", nullptr));
        menuPomoc->setTitle(QApplication::translate("MainWindow", "Program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
