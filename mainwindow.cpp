#include <QtCore/QCoreApplication>
#include <QtCore>
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <ctype.h>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //adds selections for level in combobox
    ui->comboBox_16->addItem("7A");
    ui->comboBox_16->addItem("6A");
    ui->comboBox_16->addItem("5A");
    ui->comboBox_16->addItem("4A");
    ui->comboBox_16->addItem("3A");
    ui->comboBox_16->addItem("2A");
    ui->comboBox_16->addItem("AI");
    ui->comboBox_16->addItem("AII");
    ui->comboBox_16->addItem("BI");
    ui->comboBox_16->addItem("BII");
    ui->comboBox_16->addItem("CI");
    ui->comboBox_16->addItem("CII");
    ui->comboBox_16->addItem("DI");
    ui->comboBox_16->addItem("DII");
    ui->comboBox_16->addItem("EI");
    ui->comboBox_16->addItem("EII");
    ui->comboBox_16->addItem("FI");
    ui->comboBox_16->addItem("FII");
    ui->comboBox_16->addItem("G");
    ui->comboBox_16->addItem("H");
    ui->comboBox_16->addItem("I");
    ui->comboBox_16->addItem("J");
    ui->comboBox_16->addItem("K");
    ui->comboBox_16->addItem("L");

    ui->comboBox_16->addItem("7A");
    ui->comboBox_16->addItem("6A");
    ui->comboBox_16->addItem("5A");
    ui->comboBox_16->addItem("4A");
    ui->comboBox_16->addItem("3A");
    ui->comboBox_16->addItem("2A");
    ui->comboBox_16->addItem("A");
    ui->comboBox_16->addItem("B");
    ui->comboBox_16->addItem("C");
    ui->comboBox_16->addItem("D");
    ui->comboBox_16->addItem("E");
    ui->comboBox_16->addItem("F");
    ui->comboBox_16->addItem("G");
    ui->comboBox_16->addItem("H");
    ui->comboBox_16->addItem("I");
    ui->comboBox_16->addItem("J");
    ui->comboBox_16->addItem("K");
    ui->comboBox_16->addItem("L");
    ui->comboBox_16->addItem("M");
    ui->comboBox_16->addItem("N");
    ui->comboBox_16->addItem("X");

    ui->comboBox->addItem("Janurary");
    ui->comboBox->addItem("Febuary");
    ui->comboBox->addItem("March");
    ui->comboBox->addItem("April");
    ui->comboBox->addItem("May");
    ui->comboBox->addItem("June");
    ui->comboBox->addItem("July");
    ui->comboBox->addItem("August");
    ui->comboBox->addItem("September");
    ui->comboBox->addItem("October");
    ui->comboBox->addItem("November");
    ui->comboBox->addItem("December");\

    ui->comboBox_15->addItem("Math");
    ui->comboBox_15->addItem("Reading");


    //adding starting pages and ending pages for starting page and ending page
    for (int i=1; i<=200; i++)
    {
        ui->comboBox_17->addItem(QString::number(i));
    }

    for (int i=1; i<=200; i++)
    {
        ui->comboBox_18->addItem(QString::number(i));
    }
    //set starting value for starting page
    ui->comboBox_18->setCurrentIndex(1);


    //days
    for(int i=1; i<32; i++)
    {
        ui->comboBox_2->addItem(QString::number(i));
    }
    //years
    for(int i=2000; i<2020; i++)
    {
        ui->comboBox_3->addItem(QString::number(i));
    }

    //number of pages
    ui->comboBox_4->addItem(QString::number(0));

    for(int i=1; i<11; i++)
    {
        ui->comboBox_4->addItem(QString::number(i));
    }


    //individul page score
    for(int i=10; i>5; i--)
    {
        ui->comboBox_5->addItem(QString::number(i));
    }
    //hide until number of pages chosen
    ui->comboBox_5->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_6->addItem(QString::number(i));
    }

    ui->comboBox_6->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_7->addItem(QString::number(i));
    }

    ui->comboBox_7->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_8->addItem(QString::number(i));
    }

    ui->comboBox_8->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_9->addItem(QString::number(i));
    }

    ui->comboBox_9->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_10->addItem(QString::number(i));
    }

    ui->comboBox_10->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_11->addItem(QString::number(i));
    }

    ui->comboBox_11->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_12->addItem(QString::number(i));
    }

    ui->comboBox_12->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_13->addItem(QString::number(i));
    }

    ui->comboBox_13->hide();

    for(int i=10; i>5; i--)
    {
        ui->comboBox_14->addItem(QString::number(i));
    }

    //setting starting how many choices
    ui->comboBox_5->setCurrentIndex(6);
    ui->comboBox_6->setCurrentIndex(6);
    ui->comboBox_7->setCurrentIndex(6);
    ui->comboBox_8->setCurrentIndex(6);
    ui->comboBox_9->setCurrentIndex(6);
    ui->comboBox_10->setCurrentIndex(6);
    ui->comboBox_11->setCurrentIndex(6);
    ui->comboBox_12->setCurrentIndex(6);
    ui->comboBox_13->setCurrentIndex(6);
    ui->comboBox_14->setCurrentIndex(6);


    ui->comboBox_14->hide();

    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    ui->label_11->hide();
    ui->label_12->hide();
    ui->label_13->hide();
    ui->label_14->hide();
    ui->label_15->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //enter new entry
    QString name;
    QString month;
    QString day;
    QString year;
    QString page, one, two, three, four, five, six, seven, eight, nine, ten, sub, level, starting, ending;
    int scores;
    int pagenumber;

    page=ui->comboBox_4->currentText(); //*********

    if (page != "0") //number of pages cant be zero
    {
    //store inputs in strings/ints
    name=ui->lineEdit->text();
    name=name.toLower();

    month=ui->comboBox->currentText();
    day=ui->comboBox_2->currentText();
    year=ui->comboBox_3->currentText();

    one=ui->comboBox_5->currentText();
    two=ui->comboBox_6->currentText();
    three=ui->comboBox_7->currentText();
    four=ui->comboBox_8->currentText();
    five=ui->comboBox_9->currentText();
    six=ui->comboBox_10->currentText();
    seven=ui->comboBox_11->currentText();
    eight=ui->comboBox_12->currentText();
    nine=ui->comboBox_13->currentText();
    ten=ui->comboBox_14->currentText();

    sub=ui->comboBox_15->currentText();
    level=ui->comboBox_16->currentText();

    // pagenumber = page.toInt();

    starting= ui->comboBox_17->currentText();
    ending= ui->comboBox_18->currentText();

    pagenumber=page.toInt();

    //average
    scores=(one.toInt()+two.toInt()+three.toInt()+four.toInt()+five.toInt()+six.toInt()+seven.toInt()+eight.toInt()+nine.toInt()+ten.toInt())/pagenumber;

    QString s = QString::number(scores);


    //create ouptput file and anlyzation file
    QFile file("C:/Users/Brandan/Desktop/KumonWrite.txt");
    QFile file2("C:/Users/Brandan/Desktop/KumonDisplay.txt");

   // if(qwe.open(QIODevice::WriteOnly | QIODevice::Text)) {
   //   qwe.write(z);
   //   qwe.close();
   //  } else {
   //   qDebug() << "Error";
   // }

    //open file
    file.open(QIODevice::Append);
    file2.open(QIODevice::Append);


    QTextStream stream(&file); //stream of information
    QTextStream stream2(&file2);

    //write to file
    stream << name << " " << month << " " << day << " " << year << " " << sub << " " << level << " " << page << " " << s << " " << starting << " " << ending << " ";
    stream2 << "Name: " << name << " | " << "Date: " << month << "/" << day << "/" << year << " | " << "Subject: " << sub << " | " << "Level: " << level <<  " | " << "Starting Page: " << starting << " | " << "Ending page: " << ending << " | " << "Individual Scores: ";

    //write individual page scores
    if ((one != "BLANK") && (one != NULL))
    {
        stream << one << " ";
        stream2 << "1" << "  ";
    }

    if ((two != "BLANK") && (two != NULL))
    {
        stream << two << " ";
        stream2 << "2" << "  ";
    }

    if ((three != "BLANK") && (three != NULL))
    {
        stream << three << " ";
        stream2 << "3" << "  ";
    }

    if ((four != "BLANK") && (four != NULL))
    {
        stream << four << " ";
        stream2 << "4" << "  ";
    }

    if ((five != "BLANK") && (five != NULL))
    {
        stream << five << " ";
        stream2 << "5" << "  ";
    }

    if ((six != "BLANK") && (six != NULL))
    {
        stream << six << " ";
        stream2 << "6" << "  ";
    }

    if ((seven != "BLANK") && (seven != NULL))
    {
        stream << seven << " ";
        stream2 << "7" << "  ";
    }

    if ((eight != "BLANK") && (eight != NULL))
    {
        stream << eight << " ";
        stream2 << "8" << "  ";
    }

    if ((nine != "BLANK") && (nine != NULL))
    {
        stream << nine << " ";
        stream2 << "9" << "  ";
    }

    if ((ten != "BLANK") && (ten != NULL))
    {
        stream << ten << " ";
        stream2 << "10" << "  ";
    }


    if (one == NULL)
    {
        stream << "0" << " ";
    }

    if (two == NULL)
    {
        stream << "0" << " ";
    }

    if (three == NULL)
    {
        stream << "0" << " ";
    }

    if (four == NULL)
    {
        stream << "0" << " ";
    }

    if (five == NULL)
    {
        stream << "0" << " ";
    }

    if (six == NULL)
    {
        stream << "0" << " ";
    }

    if (seven == NULL)
    {
        stream << "0" << " ";
    }

    if (eight == NULL)
    {
        stream << "0" << " ";
    }

    if (nine == NULL)
    {
        stream << "0" << " ";
    }

    if (ten == NULL)
    {
        stream << "0" << " ";
    }

    //end stream
    stream << endl;
    stream2 << endl;

    //close file
    file.close();
    file2.close();


    }
    else
    {
       //if there is zero pages
       QMessageBox::warning(this,tr("Warning"),tr("More then 0 number of pages are needed"));
    }
}

//when page number is changed show options for corresponding scores on those pages
void MainWindow::on_comboBox_4_currentIndexChanged(int index)
{
    if (ui->comboBox_4->currentText()=="0")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
    }

    if (ui->comboBox_4->currentText()=="1")
    {

        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->label_6->show();
    }

    if (ui->comboBox_4->currentText()=="2")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->label_6->show();
        ui->label_7->show();
    }

    if (ui->comboBox_4->currentText()=="3")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->comboBox_7->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
    }

    if (ui->comboBox_4->currentText()=="4")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->comboBox_7->show();
        ui->comboBox_8->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
    }

    if (ui->comboBox_4->currentText()=="5")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->comboBox_7->show();
        ui->comboBox_8->show();
        ui->comboBox_9->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
    }

    if (ui->comboBox_4->currentText()=="6")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->comboBox_7->show();
        ui->comboBox_8->show();
        ui->comboBox_9->show();
        ui->comboBox_10->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
        ui->label_11->show();
    }

    if (ui->comboBox_4->currentText()=="7")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->comboBox_7->show();
        ui->comboBox_8->show();
        ui->comboBox_9->show();
        ui->comboBox_10->show();
        ui->comboBox_11->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
        ui->label_11->show();
        ui->label_12->show();
    }

    if (ui->comboBox_4->currentText()=="8")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->comboBox_7->show();
        ui->comboBox_8->show();
        ui->comboBox_9->show();
        ui->comboBox_10->show();
        ui->comboBox_11->show();
        ui->comboBox_12->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
        ui->label_11->show();
        ui->label_12->show();
        ui->label_13->show();
    }

    if (ui->comboBox_4->currentText()=="9")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->comboBox_7->show();
        ui->comboBox_8->show();
        ui->comboBox_9->show();
        ui->comboBox_10->show();
        ui->comboBox_11->show();
        ui->comboBox_12->show();
        ui->comboBox_13->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
        ui->label_11->show();
        ui->label_12->show();
        ui->label_13->show();
        ui->label_14->show();
    }

    if (ui->comboBox_4->currentText()=="10")
    {
        ui->comboBox_5->hide();
        ui->comboBox_6->hide();
        ui->comboBox_7->hide();
        ui->comboBox_8->hide();
        ui->comboBox_9->hide();
        ui->comboBox_10->hide();
        ui->comboBox_11->hide();
        ui->comboBox_12->hide();
        ui->comboBox_13->hide();
        ui->comboBox_14->hide();

        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();

        ui->comboBox_5->show();
        ui->comboBox_6->show();
        ui->comboBox_7->show();
        ui->comboBox_8->show();
        ui->comboBox_9->show();
        ui->comboBox_10->show();
        ui->comboBox_11->show();
        ui->comboBox_12->show();
        ui->comboBox_13->show();
        ui->comboBox_14->show();

        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
        ui->label_11->show();
        ui->label_12->show();
        ui->label_13->show();
        ui->label_14->show();
        ui->label_15->show();
    }

}


//show corresponding levels with either math or reading
void MainWindow::on_comboBox_15_currentIndexChanged(const QString &arg1)
{
    if (ui->comboBox_15->currentText()=="Math")
    {
        ui->comboBox_16->clear();
        ui->comboBox_16->addItem("7A");
        ui->comboBox_16->addItem("6A");
        ui->comboBox_16->addItem("5A");
        ui->comboBox_16->addItem("4A");
        ui->comboBox_16->addItem("3A");
        ui->comboBox_16->addItem("2A");
        ui->comboBox_16->addItem("A");
        ui->comboBox_16->addItem("B");
        ui->comboBox_16->addItem("C");
        ui->comboBox_16->addItem("D");
        ui->comboBox_16->addItem("E");
        ui->comboBox_16->addItem("F");
        ui->comboBox_16->addItem("G");
        ui->comboBox_16->addItem("H");
        ui->comboBox_16->addItem("I");
        ui->comboBox_16->addItem("J");
        ui->comboBox_16->addItem("K");
        ui->comboBox_16->addItem("L");
        ui->comboBox_16->addItem("M");
        ui->comboBox_16->addItem("N");
        ui->comboBox_16->addItem("X");
    }

    if(ui->comboBox_15->currentText()=="Reading")
    {
        ui->comboBox_16->clear();
        ui->comboBox_16->addItem("7A");
        ui->comboBox_16->addItem("6A");
        ui->comboBox_16->addItem("5A");
        ui->comboBox_16->addItem("4A");
        ui->comboBox_16->addItem("3A");
        ui->comboBox_16->addItem("2A");
        ui->comboBox_16->addItem("AI");
        ui->comboBox_16->addItem("AII");
        ui->comboBox_16->addItem("BI");
        ui->comboBox_16->addItem("BII");
        ui->comboBox_16->addItem("CI");
        ui->comboBox_16->addItem("CII");
        ui->comboBox_16->addItem("DI");
        ui->comboBox_16->addItem("DII");
        ui->comboBox_16->addItem("EI");
        ui->comboBox_16->addItem("EII");
        ui->comboBox_16->addItem("FI");
        ui->comboBox_16->addItem("FII");
        ui->comboBox_16->addItem("G");
        ui->comboBox_16->addItem("H");
        ui->comboBox_16->addItem("I");
        ui->comboBox_16->addItem("J");
        ui->comboBox_16->addItem("K");
        ui->comboBox_16->addItem("L");
    }
}



//stored data
void MainWindow::on_pushButton_2_clicked()
{
    Dialog object1;
    object1.setModal(true);
    object1.exec();
}


