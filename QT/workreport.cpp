#include "workreport.h"
#include "ui_workreport.h"

WorkReport::WorkReport(QWidget *parent) :
    QWidget(parent),
    workReport(new Ui::WorkReport)
{
    workReport->setupUi(this);
    workReport->close->setText("Close");
    workReport->Title->setText("WORK REPORT");
    workReport->lineOne->setText(" در این برنامه از مفا هیم کلاس ها و وراثت و چند ریختی شده است ");
    workReport->lineTwo->setText(" کلاس Managment همناهنگ و تصمیم گیرنده در این برنامه می باشد که با کلاس های  Scheduler و Process رابطه ی یک طرفه دارد");
    workReport->lineThree->setText(" کلاس Managment به تعداد خواسته شده ی کاربر process(فرایند) می سازد که هر فرایند متشکل از ویژگی های زیر است : ");
    workReport->linefour->setText(" 1.نام فرایند(processName) ");
    workReport->lineFive->setText(" 2.زمان ورود فرایند (arrivalTime)");
    workReport->lineSix->setText(" 3.زمان مورد نیاز برای اجرای فرایند(serviceTime)");
    workReport->lineSeven->setText(" 4.زمان اجرای آن برنامه(startTime)");
    workReport->lineEight->setText(" 5.زمان خاتمه آن برنامه (finishTime)");
    workReport->lineNine->setText(" 6.زمان جواب دادن به آن برنامه (responseTime) (Tr/Ts)");
    workReport->lineTen->setText(" کلاس Managment بعد از ایجاد فرایند ها با گرفتن نوع الگوریتم که آن را از کاربر میگیرد اطلاعات را به کلاس Scheduler ارسال میکند");
    workReport->lineEleven->setText(" هر یک از الگوریتم ها یک فرزند کلاس Scheduler هستند(استفاده از وراثت) و با گرفتن اطلاعات هر یک از این فرزند ها به نوبه ی  خود 3 ویژگی یک فرایند ");
    workReport->lineTwoEleven->setText(" را که متشکل از (startTime , finishTime , responseTime) است را حساب میکنند. (استفاده از چند ریختی).");
    workReport->line13->setText(" لازم به ذکر است که در الگوریتم پیشنهادی از ترکیب 2 الگوریتم SRT و HRRN استفاده شده است.");
    workReport->line14->setText(" برای interface این برنامه از QT 5.3 استفاده شده است.");
}

WorkReport::~WorkReport()
{
    delete workReport;
}

void WorkReport::on_close_clicked()
{
    close();
}
