#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QDialog>
#include "getquantom.h"
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QDialog *parent = 0);
    ~Menu();
    int getSelect();
    int getQuantomTime();
private slots:
    void on_FCFSalgorithm_clicked();

    void on_RRalgorithme_clicked();

    void on_SPNalgorithm_clicked();

    void on_SRTalgorithm_clicked();

    void on_HRRNalgorithm_clicked();

    void on_NEWalgorithm_clicked();

private:
    Ui::Menu *ui;
    int select;
    int quantomTime;
    GetQuantom *quantom;
};

#endif // MENU_H
