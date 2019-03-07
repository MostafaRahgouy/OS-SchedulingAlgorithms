#include "getquantom.h"
#include "ui_getquantom.h"

GetQuantom::GetQuantom(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::GetQuantom)
{
    ui->setupUi(this);
    ui->quantomTimeLabel->setText("Select Quantom Time And Then Press OK : ");
    ui->okPushButton->setText("OK");
}

GetQuantom::~GetQuantom()
{
    delete ui;
}

void GetQuantom::on_okPushButton_clicked()
{
    close();
}

int GetQuantom::getQuantomTime()
{
    return ( ui->time->currentIndex() + 1 );
}
