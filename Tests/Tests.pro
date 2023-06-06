QT += testlib
QT -= gui
QT += network sql

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_mathtest.cpp \
    ../Exam/functions.cpp \
    ../Exam/mytcpserver.cpp

HEADERS += \
    ../Exam/functions.h \
    ../Exam/mytcpserver.h
