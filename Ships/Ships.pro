TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -pthread

INCLUDEPATH += \
        /home/gith/workspace/googletest/googletest/include\
        /home/gith/workspace/googletest/googletest\
        /home/gith/workspace/googletest/googlemock/include\
        /home/gith/workspace/googletest/googlemock

SOURCES += \
        /home/gith/workspace/googletest/googletest/src/gtest-all.cc\
        /home/gith/workspace/googletest/googlemock/src/gmock-all.cc\
        game.cpp\
        board.cpp\
        ship.cpp \
    testme.cpp


HEADERS += \
        game.h\
        board.h\
        ship.h

