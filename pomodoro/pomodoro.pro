TARGET = pomodoro
TEMPLATE = app

QT       += core gui

# unit testing
CONFIG(debug, debug|release) {
    QT += testlib
    include(test/test.pri)
}

SOURCES += main.cpp

HEADERS += main_window.hpp
SOURCES += main_window.cpp
FORMS   += main_window.ui

HEADERS += pomodoro_timer.hpp
SOURCES += pomodoro_timer.cpp
