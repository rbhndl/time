#pragma once
#ifndef ALL_TESTS_HPP
#define ALL_TESTS_HPP

#include "test.hpp"

namespace test
{

typedef QList<Test*> TestList;

class AllTests : public QObject, public TestList
{
    // SECTION META
    Q_OBJECT
    // SECTION CONSTRUCTION
public:
    explicit AllTests(QObject* parent = 0);
    // SECTION METHODS
private slots:
    void make();
public:
    static int run(int argc, char* argv[]);
};

}

#endif // ALL_TESTS_HPP
