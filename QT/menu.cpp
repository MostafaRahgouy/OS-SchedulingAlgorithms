#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    ui->FCFSalgorithm->setText("First Come First Served (FCFS)");
    ui->RRalgorithme->setText("Round Robin (RR)");
    ui->SPNalgorithm->setText("Shortest Process Next (SPN)");
    ui->SRTalgorithm->setText("Shortest Remaining Time (SRT)");
    ui->HRRNalgorithm->setText("Highest Response Ratio Next (HRRN)");
    ui->NEWalgorithm->setText("Suggested Algorithm");
}

Menu::~Menu()
{
    delete ui;
}

int Menu::getSelect()
{
    return select;
}

void Menu::on_FCFSalgorithm_clicked()
{
    select = 1;
    close();
}

void Menu::on_RRalgorithme_clicked()
{
    quantom = new GetQuantom();
    quantom->show();
    quantom->exec();
    quantomTime = quantom->getQuantomTime();
    select = 2;
    close();
}

int Menu::getQuantomTime()
{
    return quantomTime;
}

void Menu::on_SPNalgorithm_clicked()
{
    select = 3;
    close();
}

void Menu::on_SRTalgorithm_clicked()
{
    select = 4;
    close();
}

void Menu::on_HRRNalgorithm_clicked()
{
    select = 5;
    close();
}

void Menu::on_NEWalgorithm_clicked()
{
    select = 6;
    close();
}
