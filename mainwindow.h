#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGridLayout *layout;
    QWidget *widget;

    QLabel *display;

    QPushButton *btn0;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *dot;
    QPushButton *equal;
    QPushButton *del;
    QPushButton *mul;
    QPushButton *min;
    QPushButton *add;
    QPushButton *ac;
    QPushButton *sign;
    QPushButton *perc;
    initWidgets();
    initLayout();
    initConnection();
private slots:
    void displayDigit();
};
#endif // MAINWINDOW_H
