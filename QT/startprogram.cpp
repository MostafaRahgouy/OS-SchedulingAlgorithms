#include "startprogram.h"
#include "ui_startprogram.h"
#include "inputdata.h"
#include "getdata.h"
#include "QWidget"
#include "management.h"
#include "menu.h"
#include <iostream>
#include <string>
using namespace std;
//****************************************************************************************************************************************************
StartProgram::StartProgram(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartProgram)
{
    ui->setupUi(this);
    ui->okProcessCount->setText("OK");
    ui->lableProcessCount->setText("Choose Process Count And Then Press OK : ");
    answer = new AnwserWork();
    myMenu = new Menu();
}
//****************************************************************************************************************************************************
StartProgram::~StartProgram()
{
    delete ui;
}
//****************************************************************************************************************************************************
void StartProgram::on_okProcessCount_clicked()
{
    int i;
    processCount = ui->comboProcessCount->currentIndex();
    inputData = new InputData[processCount + 1 ];
    for( i = 0; i < processCount; i ++ )
    {
        inputData[i].setModal(true);
    }
    processes = new Management( processCount + 1 );
    for( i = 0; i < processCount + 1; i++ )
    {
        inputData[i].setProcessCount( i + 1 );
        inputData[i].exec();
        processes->setProcesses( inputData[i].getProcessName().toStdString() , inputData[i].getArrivalTime() , inputData[i].getServiceTime() , i);
    }
    myMenu->show();
    myMenu->exec();
    processes->setMenuNumber( myMenu->getSelect() );
    processes->setQ( myMenu->getQuantomTime() );
    processes->selectSchedulingAlgoritme();
    for( i = 0; i < processCount + 1; i++ )
    {
        answer->setProcessCount( i + 1 );
        answer->setProcessName( inputData[i].getProcessName() );
        answer->setResponseTime( processes->getResponeTime( i ) );
        answer->setFinishTime( processes->getFinishTime( i ) );
        answer->setStartTime( processes->getStartTime( i ) );
        answer->finalSet();
        answer->exec();
    }
    this->close();
}
//****************************************************************************************************************************************************
