#include "shapeforexplanation.h"
#include "ui_shapeforexplanation.h"

shapeForExplanation::shapeForExplanation(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::shapeForExplanation)
{
    ui->setupUi(this);
    ui->managment->setText("Managment class");
    ui->Schedular->setText("Schedular");
    ui->FCFS->setText("FCFS");
    ui->HRRN->setText("HRRN");
    ui->SRT->setText("SRT");
    ui->RR->setText("RR");
    ui->SPN->setText("SPN");
    ui->suggest->setText("Suggest");
    ui->process->setText("Process Class");
    ui->LinkListRR->setText("LinkListRR");
    ui->linkListSRT->setText("LinkListSRT");
    ui->Title->setText("<b>WORK REPORT</b>");
    ui->next->setText("Next Page");
    ui->line1->setText(" برای دیدن داخل کلاس ها موس را ");
    ui->line2->setText(" روی Button مورد نظر نگه دارید.");
    ui->line3->setText(" رابطه");
    ui->line3_2->setText(" وراثت");
    ui->line3_3->setText(" رابطه یک طرفه");
    setToolTips();
}

shapeForExplanation::~shapeForExplanation()
{
    delete ui;
}

void shapeForExplanation::setToolTips()
{
    ui->Schedular->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                              "<font color = 'black' > <ul>"
                              "<li> VIRTUAL CALCULATE(...) = 0 </li> "
                              "<li> VIRTUAL GETQUANTOM()</li>"
                              "</ul> </b>");
    ui->FCFS->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                         "<font color = 'black' > <ul>"
                         "<li> VIRTUAL CALCULATE(...) </li> "
                         "</ul> </b>");
    ui->HRRN->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                         "<font color = 'black' > <ul>"
                         "<li> VIRTUAL CALCULATE(...) </li> "
                         "</ul> </b>");
    ui->SPN->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                        "<font color = 'black' > <ul>"
                        "<li> VIRTUAL CALCULATE(...) </li> "
                        "</ul> </b>");
    ui->SRT->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                        "<font color = 'black' > <ul>"
                        "<li> VIRTUAL CALCULATE(...) </li> "
                        "<li> SETLOCALINFOSRT(...)</li>"
                        "</ul> </b>");
    ui->RR->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                       "<font color = 'black' > <ul>"
                       "<li> VIRTUAL CALCULATE(...) </li> "
                       "<li> VIRTUAL GETQUANTOM()</li>"
                       "<li> SETLOCALINFOSRT(...)</li>"
                       "<li> ISFINISHEDPROCESSES(...)</li>"
                       "</ul></b>");
    ui->suggest->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                            "<font color = 'black' > <ul>"
                            "<li> VIRTUAL CALCULATE(...) </li> "
                            "</ul> </b>");
    ui->linkListSRT->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                                "<font color = 'black' > <ul>"
                                "<li> SETPARTCOUNT(...) </li>"
                                "<li> GETPARTCOUNT() </li>"
                                "<li> SETPROCESSNAME(...)</li>"
                                "<li> SETSERVICETIME(...)</li>"
                                "<li> GETSERVICETIME()</li>"
                                "<li> SETARRIVALTIME(...) </li>"
                                "<li> GETARRIVALTIME() </li>"
                                "</ul> </b>");
    ui->LinkListRR->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                               "<font color = 'black' > <ul>"
                               "<li> SETINFORR(...) </li>"
                               "<li> DELETEINFORR(...)</li>"
                               "<li> GETFIRSTLIST()</li>"
                               "<li> GETLASTLIST()</li>"
                               "</ul> </b>");
    ui->process->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                            "<font color = 'black' > <ul>"
                            "<li>PROCESS(....)</li> "
                            "<li>SETARRIVALTIME(...)</li> "
                            "<li>SETSERVICETIME(...)</li> "
                            "<li>SETPROCESSTIME(...)</li> "
                            "<li>GETARRIVALTIME()</li> "
                            "<li>GERSERVICETIME()</li> "
                            "<li>GETPROCESSNAME()</li> "
                            "<li>ISCALCULATEDPROCESS()</li> "
                            "<li>SETCALCULATEDPROCESS(...)</li> "
                            "</ul>"
                            "<font color = 'red' size = 14 > VARIABLES : </font>"
                            "<font color = 'black' > <ul>"
                            "<li>ARRIVALTIME</li>"
                            "<li>SERVICETIME</li>"
                            "<li>PROCESSNAME</li>"
                            "<li>CALCULATEDPROCESS</li>"
                            "</ul> </b>");
    ui->managment->setToolTip("<b> <font color = 'red' size = 14 > FUNCTIONS : </font>"
                              "<font color = 'black' > <ul>"
                              "<li>MANAGEMENT(...)</li>"
                              "<li>GETPROCESSCOUNT()</li>"
                              "<li>SETPROCESSCOUNT(...)</li>"
                              "<li>*GETPROCESSES()</li>"
                              "<li>GETRESPONSETIME(...)</li>"
                              "<li>GETSTARTTIME(...)</li>"
                              "<li>GETFINISHTIME(...)</li>"
                              "<li>SETPROCESSES(....)</li>"
                              "<li>SETMENUNUMBER(...)</li>"
                              "<li>SELECTSCHEDULERALGORITME()</li>"
                              "<li>SETQ(....)</li>"
                              "<li>GETQ()</li>"
                              "<li>SORTPROCESSES()</li>"
                              "<li>INITRESPONSETIME()</li>"
                              "<li>ASSESSORALTORITMS()</li>"
                              "</ul>"
                              "<font color = 'red' size = 14 > VARIABLES : </font>"
                              "<font color = 'black' > <ul>"
                              "<li>PROCESSCOUNT</li>"
                              "<li>PROGRAMTIME</li>"
                              "<li>MENUNUMBER</li>"
                              "<li>*RESPONSETIME</li>"
                              "<li>*STARTTIME</li>"
                              "<li>FINISHTIME</li>"
                              "<li>*PROCESSES</li>"
                              "</ul> </b>");
}

void shapeForExplanation::on_next_clicked()
{
    close();
}
