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
    complex c1,c2,ans;
    c1.real=ui->lineEdit->text().toDouble();
    c1.imaginary=ui->lineEdit_2->text().toDouble();
    c2.real=ui->lineEdit_3->text().toDouble();
    c2.imaginary=ui->lineEdit_4->text().toDouble();
    ans=c1+c2;
    ui->plainTextEdit->setPlainText(QString :: number(ans.real));
    ui->plainTextEdit_2->setPlainText(QString :: number(ans.imaginary)+"i");

}

void MainWindow::on_pushButton_2_clicked()
{
    complex c1,c2,ans;
    c1.real=ui->lineEdit->text().toDouble();
    c1.imaginary=ui->lineEdit_2->text().toDouble();
    c2.real=ui->lineEdit_3->text().toDouble();
    c2.imaginary=ui->lineEdit_4->text().toDouble();
    ans=c1-c2;
    ui->plainTextEdit->setPlainText(QString :: number(ans.real));
    ui->plainTextEdit_2->setPlainText(QString :: number(ans.imaginary)+"i");
}

void MainWindow::on_pushButton_4_clicked()
{
    //c1*c2;
    complex c1,c2,ans;
    c1.real=ui->lineEdit->text().toDouble();
    c1.imaginary=ui->lineEdit_2->text().toDouble();
    c2.real=ui->lineEdit_3->text().toDouble();
    c2.imaginary=ui->lineEdit_4->text().toDouble();
    ans=c1*c2;
    ui->plainTextEdit->setPlainText(QString :: number(ans.real));
    ui->plainTextEdit_2->setPlainText(QString :: number(ans.imaginary)+"i");
}

void MainWindow::on_pushButton_3_clicked()
{
    //c1/c2
    complex c1,c2,ans;
    c1.real=ui->lineEdit->text().toDouble();
    c1.imaginary=ui->lineEdit_2->text().toDouble();
    c2.real=ui->lineEdit_3->text().toDouble();
    c2.imaginary=ui->lineEdit_4->text().toDouble();
    ans=c1/c2;
    ui->plainTextEdit->setPlainText(QString :: number(ans.real));
    ui->plainTextEdit_2->setPlainText(QString :: number(ans.imaginary)+"i");
}

void MainWindow::on_pushButton_5_clicked()
{
    //complementary
    complex c1,c2,ans1,ans2;
    c1.real=ui->lineEdit->text().toDouble();
    c1.imaginary=ui->lineEdit_2->text().toDouble();
    c2.real=ui->lineEdit_3->text().toDouble();
    c2.imaginary=ui->lineEdit_4->text().toDouble();
    ans1=(~c1);
    ans2=(~c2);
    ui->plainTextEdit->setPlainText(QString :: number(ans1.real) + "\n" + QString :: number(ans2.real));
    ui->plainTextEdit_2->setPlainText(QString :: number(ans1.imaginary)+"i" + "\n" + QString :: number(ans2.imaginary) + "i");

}

void MainWindow::on_pushButton_6_clicked()
{
    //equality
    complex c1,c2;
    c1.real=ui->lineEdit->text().toDouble();
    c1.imaginary=ui->lineEdit_2->text().toDouble();
    c2.real=ui->lineEdit_3->text().toDouble();
    c2.imaginary=ui->lineEdit_4->text().toDouble();
    if(c1==c2)
    {
        ui->plainTextEdit->setPlainText("no. are ");
        ui->plainTextEdit_2->setPlainText("equal");
    }
    else
    {
        ui->plainTextEdit->setPlainText("no. are not ");
        ui->plainTextEdit_2->setPlainText("equal");
    }
}
