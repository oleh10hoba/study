#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cmath>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);


    void on_actionAutor_triggered();

    void on_actionZamknij_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
