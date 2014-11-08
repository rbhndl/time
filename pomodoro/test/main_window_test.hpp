#pragma once
#ifndef MAIN_WINDOW_TEST_HPP
#define MAIN_WINDOW_TEST_HPP

#include "test.hpp"

namespace pomodoro
{

class MainWindow_Test : public test::Test
{
    // SECTION META
    Q_OBJECT
    // SECTION CONSTRUCTION
public:
    explicit MainWindow_Test(QObject* parent = 0);
    // SECTION METHODS
public:
    virtual void test_cases();
    virtual void benchmarks();
};

}

#endif // MAIN_WINDOW_TEST_HPP
