#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    layout(new QGridLayout()),
    widget(new QWidget()),
    btn0(new QPushButton()),
    btn1(new QPushButton()),
    btn3(new QPushButton()),
    btn2(new QPushButton()),
    btn4(new QPushButton()),
    btn5(new QPushButton()),
    btn6(new QPushButton()),
    btn7(new QPushButton()),
    btn8(new QPushButton()),
    btn9(new QPushButton()),
    dot(new QPushButton()),
    equal(new QPushButton()),
    del(new QPushButton()),
    mul(new QPushButton()),
    min(new QPushButton()),
    add(new QPushButton()),
    ac(new QPushButton()),
    sign(new QPushButton()),
    perc(new QPushButton()){
    setWindowTitle("My Calculator");
    initWidgets();
    initLayout();
    initConnection();
}
void MainWindow::initLayout(){
    setCentralWidget(widget);
    widget->setLayout(layout);
    // QPushButton *buttons[]; // Массив указателей на кнопки

    // for (int i = 0; i < 12; ++i) {
    //     buttons[i] = new QPushButton("btn " + QString::number(i + 1));
    //     layout.addWidget(buttons[i],); // Размещение кнопки в сетке 
    // }
    layout->addWidget(display, 0, 0, 1, 4);

    layout->addWidget(btn0, 5, 0, 1, 2);
    layout->addWidget(btn1, 4, 0, 1, 1);
    layout->addWidget(btn3, 4, 1, 1, 1);
    layout->addWidget(btn2, 4, 2, 1, 1);
    layout->addWidget(btn4, 3, 0, 1, 1);
    layout->addWidget(btn5, 3, 1, 1, 1);
    layout->addWidget(btn6, 3, 2, 1, 1);
    layout->addWidget(btn7, 2, 0, 1, 1);
    layout->addWidget(btn8, 2, 1, 1, 1);
    layout->addWidget(btn9, 2, 2, 1, 1);
    layout->addWidget(dot, 5, 2, 1, 1);
    layout->addWidget(equal, 5, 3, 1, 1);
    layout->addWidget(del, 1, 3, 1, 1);
    layout->addWidget(mul, 2, 3, 1, 1);
    layout->addWidget(min, 3, 3, 1, 1);
    layout->addWidget(add, 4, 3, 1, 1);
    layout->addWidget(ac, 1, 0, 1, 1);
    layout->addWidget(sign, 1, 1, 1, 1);
    layout->addWidget(perc, 1, 2, 1, 1);
}
void MainWindow::iniWidgets(){
    btn0->setText("0");
    btn1->setText("1");
    btn3->setText("2");
    btn2->setText("3");
    btn4->setText("4");
    btn5->setText("5");
    btn6->setText("6");
    btn7->setText("7");
    btn8->setText("8");
    btn9->setText("9");
    dot->setText(".");
    equal->setText("=");
    del->setText("/");
    mul->setText("*");
    min->setText("-");
    add->setText("+");
    ac->setText("AC");
    sign->setText("+/-");
    perc->setText("%");
}
void MainWindow::initConnection(){
    connect(btn0, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn1, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn3, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn2, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn4, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn5, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn6, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn7, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn8, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(btn9, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(dot, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(equal, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(del, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(mul, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(min, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(add, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(ac, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(sign, &QPushButton::clicked, this, &MainWindow::displayDigit);
    connect(perc, &QPushButton::clicked, this, &MainWindow::displayDigit);

}


void MainWindow::dispalyDigit(){
    auto* btn = dynamic_cast <QPushButton*>(sender());
    if(display->text() == "0"){
        display->setText(btn->text());
    }
    else {
        display->setText(display->text() + btn->text());
    }
}