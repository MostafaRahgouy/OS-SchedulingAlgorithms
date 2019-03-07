#ifndef ANWSERWORK_H
#define ANWSERWORK_H
//*****************************************************************************************************************************************************
#include <QWidget>
#include <iostream>
#include <string>
#include <QDialog>
using namespace std;
//*****************************************************************************************************************************************************

namespace Ui {
class AnwserWork;
}

class AnwserWork : public QDialog
{
    Q_OBJECT

public:
    explicit AnwserWork(QDialog *parent = 0);
    ~AnwserWork();
    void setProcessName( QString );
    void setResponseTime( float );
    void setFinishTime( int );
    void setStartTime( int );
    void finalSet();
    void setProcessCount( int );
private slots:
    void on_nextProcess_clicked();

private:
    Ui::AnwserWork *ui;
    float responseTime;
    int finishTime;
    int startTime;
    int processCount;
    QString processName;
};
//*****************************************************************************************************************************************************
#endif // ANWSERWORK_H
