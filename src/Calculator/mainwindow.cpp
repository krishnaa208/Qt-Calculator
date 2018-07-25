#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

double firstNumber;
bool isTyping = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->c,SIGNAL(released()),this,SLOT(clearPressed()));
    connect(ui->mp,SIGNAL(released()),this,SLOT(unaryPressed()));
    connect(ui->percent,SIGNAL(released()),this,SLOT(unaryPressed()));
    connect(ui->dot,SIGNAL(released()),this,SLOT(dotPressed()));

    connect(ui->divide,SIGNAL(released()),this,SLOT(binaryPressed()));
    connect(ui->multiply,SIGNAL(released()),this,SLOT(binaryPressed()));
    connect(ui->minus,SIGNAL(released()),this,SLOT(binaryPressed()));
    connect(ui->plus,SIGNAL(released()),this,SLOT(binaryPressed()));
    connect(ui->equal,SIGNAL(released()),this,SLOT(equalPressed()));

    ui->plus->setCheckable(true);
    ui->minus->setCheckable(true);
    ui->divide->setCheckable(true);
    ui->multiply->setCheckable(true);

    connect(ui->_0,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_1,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_2,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_3,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_4,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_5,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_6,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_7,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_8,SIGNAL(released()),this,SLOT(digitPressed()));
    connect(ui->_9,SIGNAL(released()),this,SLOT(digitPressed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::clearPressed(){
    ui->plus->setChecked(false);
    ui->minus->setChecked(false);
    ui->divide->setChecked(false);
    ui->multiply->setChecked(false);
    isTyping=false;
    ui->label->setText("0");
    firstNumber=0;
}
void MainWindow::equalPressed(){

    double labelNumber , secondNumber ;
    QString newlabel;
    secondNumber = ui->label->text().toDouble();


    if(ui->plus->isChecked()){
        labelNumber = firstNumber + secondNumber;
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
        ui->plus->setChecked(false);
    }else if(ui->minus->isChecked()){
        labelNumber = firstNumber - secondNumber;
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
        ui->minus->setChecked(false);

    }else if(ui->divide->isChecked()){
        labelNumber = firstNumber / secondNumber;
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
        ui->divide->setChecked(false);
    }else if(ui->multiply->isChecked()){
        labelNumber = firstNumber * secondNumber;
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
        ui->multiply->setChecked(false);
    }
    isTyping = false;

}
void MainWindow::dotPressed(){
 ui->label->setText(ui->label->text()+".");
}
void MainWindow::binaryPressed(){
  QPushButton* button = (QPushButton*)sender();
  firstNumber = ui->label->text().toDouble();
  button->setCheckable(true);
}
void MainWindow::unaryPressed(){
    QPushButton* button = (QPushButton*)sender();

    double number ;
    QString newlabel;

        if( button->text()=="+/_"){
            number = ((ui->label->text()).toDouble()) *-1;
            newlabel = QString::number(number,'g',15);
            ui->label->setText(newlabel);
        }
        if(button->text()=="%"){
            number = ((ui->label->text()).toDouble()) *0.01;
            newlabel = QString::number(number,'g',15);
            ui->label->setText(newlabel);
            }

}

void MainWindow::digitPressed(){
    QPushButton* button = (QPushButton*)sender();

    double number ;
    QString newlabel;

    if((ui->divide->isChecked() || ui->multiply->isChecked()
            || ui->minus->isChecked() || ui->plus->isChecked())
            &&(!isTyping)){
       number =  button->text().toDouble();
       isTyping = true;
        newlabel = QString::number(number,'g',15);
    }
    else{
        if(ui->label->text().contains(".") && button->text() == "0"){
                newlabel = (ui->label->text()+ button->text());
        }
        else{
            number = (ui->label->text()+ button->text()).toDouble();
            newlabel = QString::number(number,'g',15);
        }

    }


    ui->label->setText(newlabel);
}
