#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "about.h"
#include "workreport.h"
#include "startprogram.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT
     About *aboutProgrammers;
     WorkReport *workReport;
     StartProgram *startProgram;
public:
    explicit MainWindow(QDialog *parent = 0);
    ~MainWindow();

private slots:



    void on_startProgram_clicked();

    void on_workReport_clicked();

    void on_about_clicked();

    void on_exit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
