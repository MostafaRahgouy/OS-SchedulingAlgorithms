#include "inputdata.h"
#include "ui_inputdata.h"
#include <iostream>
#include <string>
#include "QDebug"
using namespace std;
//*****************************************************************************************************************************************************
InputData::InputData(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::InputData)
{
    ui->setupUi(this);
    ui->nameProcess->setText("ProcessName");
    ui->arrivalTime->setText("ArrivalTime");
    ui->serviceTime->setText("ServiceTime");
    ui->okInputData->setText("ok");
    ui->labelHedear->setText("Enter The Information Process");
    arrivalTime = 0;
    serviceTime = 0;
}
//*****************************************************************************************************************************************************
InputData::~InputData()
{
    delete ui;
}
//*****************************************************************************************************************************************************
void InputData::on_okInputData_clicked()
{
    calculateData();
}
//*****************************************************************************************************************************************************
QString InputData::getProcessName()
{
    return processName;
}
//*****************************************************************************************************************************************************
int InputData::getArrivalTime()
{
    return arrivalTime;
}
//*****************************************************************************************************************************************************
int InputData::getServiceTime()
{
    return serviceTime;
}
//*****************************************************************************************************************************************************
void InputData::calculateData()
{
    processName = ui->lineEditProcessName->text();
    string temp;
    temp = ui->lineEditArrivalTime->text().toStdString();
    calculateDataTemp( temp , "arrivalTime");
    temp = ui->lineEditServiceTime->text().toStdString();
    calculateDataTemp( temp , "serviceTime");
    ui->numberProcess->setText( showProcess );
    ui->lineEditArrivalTime->clear();
    ui->lineEditProcessName->clear();
    ui->lineEditServiceTime->clear();
    close();
}
//*****************************************************************************************************************************************************
void InputData::calculateDataTemp( string invert , string nameVariable )
{
    int i , m = 1;
    for( i = invert.length() - 1 ; i >= 0 ; i -- )
    {
        if( nameVariable == "arrivalTime" )
        {
            arrivalTime += m * ( invert[i] - 48 );
        }
        else
        {
            serviceTime += m * ( invert[i] - 48 );
        }
        m *= 10;
    }
}
//*****************************************************************************************************************************************************
void InputData::setProcessCount( int processCount )
{
    ui->numberProcess->setText( QString::number(processCount) );
}
//****************************************************************************************************************************************************
