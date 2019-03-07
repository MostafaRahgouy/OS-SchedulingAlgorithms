#ifndef WORKREPORT_H
#define WORKREPORT_H

#include <QWidget>

namespace Ui {
class WorkReport;
}

class WorkReport : public QWidget
{
    Q_OBJECT

public:
    explicit WorkReport(QWidget *parent = 0);
    ~WorkReport();

private slots:
    void on_close_clicked();

private:
    Ui::WorkReport *workReport;
};

#endif // WORKREPORT_H
