#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    DisplayText();


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::DisplayText()
{
    QString edit;

    QFile myFile("C:/Users/Brandan/Desktop/KumonDisplay.txt"); //what file
    myFile.open(QIODevice::ReadOnly); //opens file

    QTextStream textStream(&myFile); //convert to stream
    QString line = textStream.readAll(); //store into variable

    //ui->textEdit->setPlainText("Name | Month | Day | Subject | Level | Pages in Packet | Average of Packet | Start Page | End Page ");
    ui->textEdit->append(line); //display text


        ui->comboBox->addItem("Janurary");
        ui->comboBox->addItem("Feburary");
        ui->comboBox->addItem("March");
        ui->comboBox->addItem("April");
        ui->comboBox->addItem("May");
        ui->comboBox->addItem("June");
        ui->comboBox->addItem("July");
        ui->comboBox->addItem("August");
        ui->comboBox->addItem("September");
        ui->comboBox->addItem("October");
        ui->comboBox->addItem("Novemeber");
        ui->comboBox->addItem("December");


    //month and year
    for (int i=1; i<=31; i++)
    {
        ui->comboBox_2->addItem(QString::number(i));
    }

    for (int i=2000; i<=2020; i++)
    {
        ui->comboBox_3->addItem(QString::number(i));
    }


    QTextCursor textCursor = ui->textEdit->textCursor();
    textCursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor,10);
    ui->textEdit->setTextCursor(textCursor);

}



void Dialog::on_pushButton_clicked()
{
    QString month;
    QString day;
    QString year;

    //stores input
    month=ui->comboBox->currentText();
    day=ui->comboBox_2->currentText();
    year=ui->comboBox_3->currentText();

    //combines string for search
    QString date= month + "/" + day + "/" + year;

    //highlights text in document
    ui->textEdit->find(date, QTextDocument::FindWholeWords);

}

void Dialog::on_pushButton_2_clicked()
{
    //stores name
    QString name=ui->lineEdit->text();

    //highlights text in document
    ui->textEdit->find(name, QTextDocument::FindWholeWords);
}
