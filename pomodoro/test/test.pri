INCLUDEPATH += $$PWD
DEPENDPATH  += $$PWD
# test package
HEADERS += $${PWD}/all_tests.hpp \
    test/pomodoro_timer_test.hpp
SOURCES += $${PWD}/all_tests.cpp \
    test/pomodoro_timer_test.cpp

HEADERS += $${PWD}/test.hpp
SOURCES += $${PWD}/test.cpp

# pomodoro package
HEADERS += $${PWD}/main_window_test.hpp
SOURCES += $${PWD}/main_window_test.cpp
