QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QUI
TEMPLATE = app


SOURCES += main.cpp\
        frmmain.cpp \
    iconhelper.cpp \
    frmmessagebox.cpp \
    mydialog.cpp \
    decryption.cpp \
    encryption.cpp \
    common.cpp \
    rc4.cpp \
    des.cpp

HEADERS  += frmmain.h \
    iconhelper.h \
    frmmessagebox.h \
    myhelper.h \
    mydialog.h \
    encryption.h \
    decryption.h \
    common.h \
    rc4.h \
    des.h \
    bignum.h \
    miller_rabin.h \
    rsa.h \
    md5.h \
    big_int.h \
    dh_fun.h \
    table.h \
    fun_dh_simple.h

FORMS    += frmmain.ui \
    frmmessagebox.ui \
    mydialog.ui

MOC_DIR=temp/moc
RCC_DIR=temp/rcc
UI_DIR=temp/ui
OBJECTS_DIR=temp/obj
DESTDIR=bin

win32:RC_FILE=main.rc

RESOURCES += \
    rc.qrc
RC_ICONS = icon.ico




