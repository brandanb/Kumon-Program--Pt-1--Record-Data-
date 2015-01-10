#include "mainwindow.h"
#include "dialog.h"
#include <QtCore/QCoreApplication>
#include <QtCore>
#include <QDebug>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
