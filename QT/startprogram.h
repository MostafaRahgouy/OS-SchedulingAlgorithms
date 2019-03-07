#ifndef STARTPROGRAM_H
#define STARTPROGRAM_H
#include "inputdata.h"
#include "management.h"
#include "anwserwork.h"
#include "menu.h"
#include <QWidget>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//****************************************************************************************************************************************************
namespace Ui {
class StartProgram;
}

class StartProgram : public QWidget
{
    Q_OBJECT

public:
    explicit StartProgram(QWidget *parent = 0);
    ~StartProgram();
    int getProcessCount();

private slots:
    void on_okProcessCount_clicked();

private:
    Ui::StartProgram *ui;
    int processCount;
    InputData *inputData;
    Management *processes;
    AnwserWork *answer;
    Menu *myMenu;
};
//****************************************************************************************************************************************************
#endif // STARTPROGRAM_H
