#pragma once
#ifndef POMODORO_TIMER_TEST_HPP
#define POMODORO_TIMER_TEST_HPP

#include "test.hpp"

namespace pomodoro
{

class Timer_Test : public test::Test
{
    // SECTION META
    Q_OBJECT
    // SECTION CONSTRUCTION
public:
    explicit Timer_Test(QObject* parent = 0);
    // SECTION METHODS
public:
    virtual void test_cases();
    virtual void benchmarks();
};

}

#endif // POMODORO_TIMER_TEST_HPP
