#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

private slots:
    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_activated(int index);

private:
    Ui::Form *ui;
};

#endif // FORM_H
