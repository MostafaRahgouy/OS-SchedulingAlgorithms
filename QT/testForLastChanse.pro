#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T22:25:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testForLastChanse
TEMPLATE = app


SOURCES += main.cpp\
    form.cpp \
    management.cpp \
    proces.cpp \
    scheduler.cpp \
    fcfs.cpp \
    hrrn.cpp \
    spn.cpp \
    rr.cpp \
    localinforr.cpp \
    lcoalinfosrt.cpp \
    srt.cpp \
    about.cpp \
    workreport.cpp \
    mainwindow.cpp \
    startprogram.cpp \
    inputdata.cpp \
    getdata.cpp \
    anwserwork.cpp \
    menu.cpp \
    getquantom.cpp \
    suggestedalgoritm.cpp \
    shapeforexplanation.cpp

HEADERS  += \
    form.h \
    management.h \
    proces.h \
    scheduler.h \
    fcfs.h \
    hrrn.h \
    spn.h \
    rr.h \
    localinforr.h \
    RRProcess.h \
    lcoalinfosrt.h \
    srt.h \
    about.h \
    workreport.h \
    mainwindow.h \
    startprogram.h \
    inputdata.h \
    getdata.h \
    anwserwork.h \
    menu.h \
    getquantom.h \
    suggestedalgoritm.h \
    shapeforexplanation.h

FORMS    += \
    form.ui \
    about.ui \
    workreport.ui \
    mainwindow.ui \
    startprogram.ui \
    inputdata.ui \
    getdata.ui \
    anwserwork.ui \
    menu.ui \
    getquantom.ui \
    shapeforexplanation.ui

win32: RC_ICONS = icon.ico

RESOURCES += \
    imags.qrc
