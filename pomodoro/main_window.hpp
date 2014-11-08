#pragma once
#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include "ui_main_window.h"

namespace pomodoro
{

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    // SECTION META
    Q_OBJECT
    // SECTION CONSTRUCTION
public:
    explicit MainWindow(QWidget* parent = 0);
    // SECTION METHODS
protected:
    void changeEvent(QEvent* e);
};

}

#endif // MAIN_WINDOW_HPP
