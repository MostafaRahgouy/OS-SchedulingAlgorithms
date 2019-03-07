#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "shapeforexplanation.h"
MainWindow::MainWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->startProgram->setText("Start Program");
    ui->workReport->setText("Work Report");
    ui->about->setText("About Program");
    ui->exit->setText("Exit");
    aboutProgrammers = new About();
    workReport = new WorkReport();
    startProgram = new StartProgram;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startProgram_clicked()
{
    startProgram->show();
}
void MainWindow::on_workReport_clicked()
{
    shapeForExplanation m;
    m.exec();
    workReport->show();
}

void MainWindow::on_about_clicked()
{
    aboutProgrammers->show();
}

void MainWindow::on_exit_clicked()
{
    close();
}
