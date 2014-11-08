#include "main_window.hpp"
#include <QApplication>

#ifdef QT_DEBUG
#include "all_tests.hpp"
using namespace test;
#endif

int main(int argc, char* argv[])
{
    QApplication application(argc, argv);
#ifdef QT_DEBUG
    // тестируем
    int test_result = AllTests::run(argc, argv);
    
    if (test_result != EXIT_SUCCESS)
    {
        return test_result;
    }
    
#endif
    pomodoro::MainWindow main_window;
    main_window.show();
    return application.exec();
}







