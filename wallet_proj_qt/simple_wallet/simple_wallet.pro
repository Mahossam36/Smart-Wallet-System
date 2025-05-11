QT       += core gui svgwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Admin.cpp \
    FileHandler.cpp \
    Login.cpp \
    SignUp.cpp \
    Transaction.cpp \
    User.cpp \
    UserManagement.cpp \
    adminmainmenu.cpp \
    balance.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    mycustomrow1.cpp \
    signupwindow.cpp \
    transactionsManagement.cpp \
    usermainmenu.cpp \
    usersendrequest_gui.cpp \
    viewusers.cpp

HEADERS += \
    Admin.h \
    FileHandler.h \
    Login.h \
    SignUp.h \
    Transaction.h \
    User.h \
    UserManagement.h \
    adminmainmenu.h \
    balance.h \
    json.hpp \
    loginwindow.h \
    mainwindow.h \
    mycustomrow1.h \
    signupwindow.h \
    transactionsManagement.h \
    usermainmenu.h \
    usersendrequest_gui.h \
    viewusers.h

FORMS += \
    adminmainmenu.ui \
    balance.ui \
    loginwindow.ui \
    mainwindow.ui \
    mycustomrow1.ui \
    signupwindow.ui \
    usermainmenu.ui \
    usersendrequest_gui.ui \
    viewusers.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    transactionsData.json \
    usersData.json \


RESOURCES += \
    screens.qrc
