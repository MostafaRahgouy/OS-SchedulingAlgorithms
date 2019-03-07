#include "getdata.h"
#include "ui_getdata.h"

getData::getData(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::getData)
{
    ui->setupUi(this);
}

getData::~getData()
{
    delete ui;
}
