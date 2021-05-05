#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_inputExpression_clicked();

    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_dial_valueChanged();
    //https://www.semestr.online/informatics/polish.php
    //a-c*(d-b)
    //acd
    //a*d-c/(b+e)
    //ad*cbe+/-
    //-/
    //a-b+c-d
    //ab-c+d-
    //a/b*c+d-e
    //ab/c*d+e-
    // -
    //a-(d*b)-e/c
    //adb*-ec/-
    //-/
    //4 9-3+3 5*+
    //(-2)
    //(a+b)*c-d/e
    //ab+c*de/-
    //
    //



    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_dial_sliderReleased();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
