#pragma once
#ifndef POMODORO_TIMER_HPP
#define POMODORO_TIMER_HPP

#include <QObject>

namespace pomodoro
{

class Timer : public QObject
{
    // SECTION META
    Q_OBJECT
    // SECTION CONSTRUCTION
public:
    explicit Timer(QObject* parent = 0);
    // SECTION PROPERTIES
    // SECTION METHODS
public slots:
    void start();
    void stop();
};

}

#endif // POMODORO_TIMER_HPP
