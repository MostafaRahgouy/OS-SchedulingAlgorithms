#include "anwserwork.h"
#include "ui_anwserwork.h"
#include <iostream>
#include <string>
//#include <string.h>
#include <QDialog>
using namespace std;
//****************************************************************************************************************************************************
AnwserWork::AnwserWork(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::AnwserWork)
{
    ui->setupUi(this);
    ui->nextProcess->setText("Next");
    ui->lableHedearAnwser->setText("Resualt Process");
    ui->processName->setText("ProcessName");
    ui->processStart->setText("processStart");
    ui->processFinish->setText("processFinish");
    ui->responseTime->setText("responseTime");
}
//****************************************************************************************************************************************************
AnwserWork::~AnwserWork()
{
    delete ui;
}
//****************************************************************************************************************************************************
void AnwserWork::setProcessName( QString processName )
{
    this->processName = processName;
}
//****************************************************************************************************************************************************
void AnwserWork::setResponseTime( float responseTime )
{
    this->responseTime = responseTime;
}
//****************************************************************************************************************************************************
void AnwserWork::setStartTime( int startTime )
{
    this->startTime = startTime;
}
//****************************************************************************************************************************************************
void AnwserWork::setFinishTime( int finishTime )
{
    this->finishTime = finishTime;
}
//****************************************************************************************************************************************************
void AnwserWork::setProcessCount( int processCount )
{
    this->processCount = processCount ;
}

//****************************************************************************************************************************************************
void AnwserWork::finalSet()
{
    ui->numberProcess->setText( QString::number(processCount) );
    ui->answerProcessName->setText( processName );
    ui->answerProcessStart->setText( QString::number( startTime ) );
    ui->answerProcessFinish->setText( QString::number( finishTime ) );
    ui->answerResponseTime->setText( QString::number( responseTime ) );
}
//****************************************************************************************************************************************************
void AnwserWork::on_nextProcess_clicked()
{
    ui->answerProcessFinish->clear();
    ui->answerProcessName->clear();
    ui->answerResponseTime->clear();
    ui->answerProcessStart->clear();
    close();
}
//****************************************************************************************************************************************************
