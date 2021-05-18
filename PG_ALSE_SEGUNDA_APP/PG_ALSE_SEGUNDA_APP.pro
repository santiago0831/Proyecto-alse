#-------------------------------------------------
#
# Project created by QtCreator 2021-05-02T02:14:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PG_ALSE_SEGUNDA_APP
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        start.cpp \
    login.cpp \
    register.cpp \
    datos_p.cpp

HEADERS += \
        start.h \
    login.h \
    register.h \
    datos_p.h

FORMS += \
        start.ui \
    login.ui \
    register.ui \
    datos_p.ui
