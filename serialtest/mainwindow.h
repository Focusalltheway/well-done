#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    struct settings{

    };
    ~MainWindow();
//    void paint(QPainte);
private slots:
    void openserialport();
    void closeserialport();
    void about();
    void writedata();
    void readData();
    void handleError(QSerialPort::SerialPortError error);
private:
    void fillportsparameters();//串口参数设置
    void setconnections();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
