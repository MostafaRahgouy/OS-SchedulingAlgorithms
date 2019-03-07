#ifndef SHAPEFOREXPLANATION_H
#define SHAPEFOREXPLANATION_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class shapeForExplanation;
}

class shapeForExplanation : public QDialog
{
    Q_OBJECT

public:
    explicit shapeForExplanation(QDialog *parent = 0);
    ~shapeForExplanation();

private slots:
    void on_next_clicked();
private:
    Ui::shapeForExplanation *ui;
    void setToolTips();
};

#endif // SHAPEFOREXPLANATION_H
