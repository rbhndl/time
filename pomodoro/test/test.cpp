#include "test.hpp"

using namespace test;

const bool Test::default_test_cases = true;
const bool Test::default_benchmark = false;

Test::Test(QObject* parent) :
    QObject(parent),
    m_test_cases(default_test_cases),
    m_benchmark(default_benchmark)
{}

const bool& Test::get_test_cases() const
{
    return m_test_cases;
}

const bool& Test::get_benchmark() const
{
    return m_benchmark;
}

void Test::set_test_cases(const bool& value)
{
    if (m_test_cases != value)
    {
        m_test_cases = value;
        emit signal_test_cases(m_test_cases);
    }
}

void Test::set_benchmark(const bool& value)
{
    if (m_benchmark != value)
    {
        m_benchmark = value;
        emit signal_benchmark(m_benchmark);
    }
}

void Test::reset_test_cases()
{
    set_test_cases(default_test_cases);
}

void Test::reset_benchmark()
{
    set_benchmark(default_benchmark);
}

void Test::run_test_cases()
{
    if (get_test_cases())
    {
        test_cases();
    }
}

void Test::run_benchmarks()
{
    if (get_benchmark())
    {
        benchmarks();
    }
}
