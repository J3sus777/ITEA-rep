include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_checkpalindrom.h \
    palindrotest.h

SOURCES += \
        main.cpp \
    palindrotest.cpp
