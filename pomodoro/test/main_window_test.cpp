#include "main_window_test.hpp"
#include "main_window.hpp"

using namespace pomodoro;

MainWindow_Test::MainWindow_Test(QObject* parent) :
    test::Test(parent)
{}

void MainWindow_Test::test_cases()
{
    // требование: главное окно по умолчанию должно называться pomodoro
    {
        MainWindow main_window;
        QCOMPARE(main_window.windowTitle(), QString("Pomodoro"));
    }
}

void MainWindow_Test::benchmarks()
{
}
