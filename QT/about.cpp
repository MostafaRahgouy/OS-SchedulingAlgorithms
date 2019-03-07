#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QWidget(parent),
    about(new Ui::About)
{
    about->setupUi(this);
    about->close->setText("Close");
    about->Title->setText("ABOUT   PROGRAM");
    about->mostafa->setText("Mostafa Rahghooye");
    about->hamed->setText("Hamed Babaei");
    about->os->setText("Operating System Project");
    about->year->setText("23 Novamber 2016");
    about->mirizadeh->setText("Master Mr.MIRIZADEH ");
}

About::~About()
{
    delete about;
}

void About::on_close_clicked()
{
     close();
}
