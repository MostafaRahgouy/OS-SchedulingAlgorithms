#ifndef GETQUANTOM_H
#define GETQUANTOM_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class GetQuantom;
}

class GetQuantom : public QDialog
{
    Q_OBJECT

public:
    explicit GetQuantom(QDialog *parent = 0);
    ~GetQuantom();
    int getQuantomTime();
private slots:
    void on_okPushButton_clicked();

private:
    Ui::GetQuantom *ui;
};

#endif // GETQUANTOM_H
