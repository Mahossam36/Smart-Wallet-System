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
    adduser.cpp \
    admin_viewuser_transaction.cpp \
    adminmainmenu.cpp \
    approverequestwin.cpp \
    balance.cpp \
    changepassword.cpp \
    editprofile.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    mycustomrow1.cpp \
    requestitem.cpp \
    signupwindow.cpp \
    transactionsManagement.cpp \
    usermainmenu.cpp \
    usersendrequest_gui.cpp \
    view_all_transactions.cpp \
    viewusers.cpp

HEADERS += \
    Admin.h \
    FileHandler.h \
    Login.h \
    SignUp.h \
    Transaction.h \
    User.h \
    UserManagement.h \
    adduser.h \
    admin_viewuser_transaction.h \
    adminmainmenu.h \
    approverequestwin.h \
    balance.h \
    changepassword.h \
    editprofile.h \
    json.hpp \
    loginwindow.h \
    mainwindow.h \
    mycustomrow1.h \
    requestitem.h \
    signupwindow.h \
    transactionsManagement.h \
    usermainmenu.h \
    usersendrequest_gui.h \
    view_all_transactions.h \
    viewusers.h

FORMS += \
    adduser.ui \
    admin_viewuser_transaction.ui \
    adminmainmenu.ui \
    approverequestwin.ui \
    balance.ui \
    changepassword.ui \
    editprofile.ui \
    loginwindow.ui \
    mainwindow.ui \
    mycustomrow1.ui \
    requestitem.ui \
    signupwindow.ui \
    usermainmenu.ui \
    usersendrequest_gui.ui \
    view_all_transactions.ui \
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

INCLUDEPATH += C:\libsodium-1.0.20-stable-mingw\libsodium-win64\include

LIBS += -LC:\libsodium-1.0.20-stable-mingw\libsodium-win64\lib -lsodium
