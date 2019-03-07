/********************************************************************************
** Form generated from reading UI file 'getdata.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETDATA_H
#define UI_GETDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_getData
{
public:

    void setupUi(QDialog *getData)
    {
        if (getData->objectName().isEmpty())
            getData->setObjectName(QStringLiteral("getData"));
        getData->resize(400, 300);

        retranslateUi(getData);

        QMetaObject::connectSlotsByName(getData);
    } // setupUi

    void retranslateUi(QDialog *getData)
    {
        getData->setWindowTitle(QApplication::translate("getData", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class getData: public Ui_getData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETDATA_H
