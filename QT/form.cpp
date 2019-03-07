#include "form.h"
#include "ui_form.h"
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_comboBox_activated(const QString &arg1)
{
}

void Form::on_comboBox_activated(int index)
{
}
