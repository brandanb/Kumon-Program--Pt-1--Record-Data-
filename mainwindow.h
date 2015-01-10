#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    std::string name;

private slots:


    void on_pushButton_clicked();

    void on_comboBox_4_currentIndexChanged(int index);

    void on_comboBox_15_currentIndexChanged(const QString &arg1);



    void on_pushButton_2_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
