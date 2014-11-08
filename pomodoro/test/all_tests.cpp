#include "all_tests.hpp"
// pomodoro package
#include "main_window_test.hpp"

using namespace test;

AllTests::AllTests(QObject* parent) :
    QObject(parent)
{
    // pomodoro package
    append(new pomodoro::MainWindow_Test(this));
}

void AllTests::make()
{
    for (TestList::iterator it_test = begin(); it_test != end(); ++it_test)
    {
        Test* const test = *it_test;
        test->run_test_cases();
        test->run_benchmarks();
    }
}

int AllTests::run(int argc, char* argv[])
{
#ifdef QT_DEBUG
    AllTests* test_all = new AllTests();
    int test_result = QTest::qExec(test_all, argc, argv);
    delete test_all;
    return test_result;
#else
    return EXIT_SUCCESS;
#endif
}
