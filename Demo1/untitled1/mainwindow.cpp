#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include "string"
#include "QDebug"
#include "QStringList"
#include "QPainter"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->insert("Please enter something... ");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::paintEvent(QPaintEvent *)
{

    QPainter map(this);



    //map.setBrush();
    map.setPen(QPen(QColor(50,50,50),5));
    map.drawLine(500,500,900,900);
    map.drawRect(400,400,50,50);
}
void MainWindow::on_pushButton_clicked()
{
    // ui->label->setFront("Hello");
    QLabel *label;


    label = new QLabel(this);

    label->setText("hello");

    label->setGeometry(QRect(QPoint(300,300), QSize(100, 100)));

    label->show();

    QString input = ui->lineEdit->text();

    // label->setText(input);

    // ui->setText(input);

    QStringList strList = input.split(",");

    for (int i = 0; i < strList.length() ;i++ ) {
        qDebug() << strList[i];
    }
}
