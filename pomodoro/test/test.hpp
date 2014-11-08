#pragma once
#ifndef TEST_HPP
#define TEST_HPP

#include <QtTest/QtTest>

namespace test
{

class Test : public QObject
{
    // SECTION META
    Q_OBJECT
public:
    Q_PROPERTY(bool test_cases READ get_test_cases WRITE set_test_cases
               RESET reset_test_cases NOTIFY signal_test_cases)
    Q_PROPERTY(bool benchmark READ get_benchmark WRITE set_benchmark
               RESET reset_benchmark NOTIFY signal_benchmark)
    // SECTION FIELDS
private:
    static const bool default_test_cases;
    static const bool default_benchmark;
private:
    bool m_test_cases;
    bool m_benchmark;
    // SECTION CONSTRUCTION
public:
    explicit Test(QObject* parent = 0);
    virtual ~Test() {}
    // SECTION PROPERTIES
public:
    Q_INVOKABLE const bool& get_test_cases() const;
    Q_INVOKABLE const bool& get_benchmark() const;
public slots:
    void set_test_cases(const bool& value);
    void set_benchmark(const bool& value);
public slots:
    void reset_test_cases();
    void reset_benchmark();
signals:
    void signal_test_cases(bool& value);
    void signal_benchmark(bool& value);
    // SECTION METHODS
protected:
    virtual void test_cases() = 0;
    virtual void benchmarks() = 0;
public:
    void run_test_cases();
    void run_benchmarks();
};

}

#endif // TEST_HPP
