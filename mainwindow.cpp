#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "complex.h"
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
    complex *c1;
    c1->real=ui->lineEdit->text().toInt();
    c1->imaginary=ui->lineEdit_3->text().toInt();
    complex *c2;
    c2->real=ui->lineEdit_2->text().toInt();
    c2->imaginary=ui->lineEdit_4->text().toInt();
    complex *ans;
    (*ans)=(*c1)+(*c2);
    //ans->real=c1->real + c2->real;
   // ans->imaginary=c1->imaginary + c2->imaginary;
     ui->plainTextEdit->setPlainText(QString :: number(ans->real));
     ui->plainTextEdit_2->setPlainText(QString :: number(ans->imaginary)+"i");
}
