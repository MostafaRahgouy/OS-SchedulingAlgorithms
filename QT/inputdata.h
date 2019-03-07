#ifndef INPUTDATA_H
#define INPUTDATA_H

#include <QWindow>
#include <iostream>
#include <string>
#include <QString>
#include <QDialog>
using namespace std;

namespace Ui {
class InputData;
}

class InputData : public QDialog
{
    Q_OBJECT

public:
    explicit InputData(QDialog *parent = 0);
    ~InputData();
    QString getProcessName();
    int getArrivalTime();
    int getServiceTime();
    void setProcessCount( int );
private slots:
    void on_okInputData_clicked();

private:
    Ui::InputData *ui;
    QString processName;
    int arrivalTime;
    int serviceTime;
    int processCount;
    QString showProcess;
    void calculateData();
    void calculateDataTemp( string , string );
};

#endif // INPUTDATA_H
