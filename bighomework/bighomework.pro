QT       += core gui
QT+=sql
QMAKE_PROJECT_DEPTH = 0

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    depfind.cpp \
    depop.cpp \
    main.cpp \
    login.cpp \
    user.cpp \
    useradd.cpp \
    userfind.cpp \
    userfindpro.cpp \
    userremake.cpp

HEADERS += \
    admin.h \
    depfind.h \
    depop.h \
    login.h \
    user.h \
    useradd.h \
    userfind.h \
    userfindpro.h \
    userremake.h

FORMS += \
    admin.ui \
    depfind.ui \
    depop.ui \
    login.ui \
    user.ui \
    useradd.ui \
    userfind.ui \
    userfindpro.ui \
    userremake.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
