#ifndef GETDATA_H
#define GETDATA_H

#include <QDialog>

namespace Ui {
class getData;
}

class getData : public QDialog
{
    Q_OBJECT

public:
    explicit getData(QDialog *parent = 0);
    ~getData();

private:
    Ui::getData *ui;
};

#endif // GETDATA_H
