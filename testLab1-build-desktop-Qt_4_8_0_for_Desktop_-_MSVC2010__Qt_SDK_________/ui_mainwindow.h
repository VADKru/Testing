/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 5. Mar 12:50:32 2014
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *output;
    QRadioButton *intoAFile;
    QRadioButton *intoAScreen;
    QLineEdit *lEIntoAFile;
    QLineEdit *lEIntoAScreen;
    QGroupBox *enter;
    QRadioButton *fromFile;
    QRadioButton *fromKeyBoard;
    QLineEdit *lEFromFile;
    QLineEdit *lEFromKeyboard;
    QLineEdit *lEStatus;
    QPushButton *Start;
    QLabel *label_status;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(533, 199);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        output = new QGroupBox(centralWidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(270, 0, 251, 111));
        intoAFile = new QRadioButton(output);
        intoAFile->setObjectName(QString::fromUtf8("intoAFile"));
        intoAFile->setGeometry(QRect(10, 20, 82, 17));
        intoAScreen = new QRadioButton(output);
        intoAScreen->setObjectName(QString::fromUtf8("intoAScreen"));
        intoAScreen->setGeometry(QRect(10, 60, 82, 17));
        lEIntoAFile = new QLineEdit(output);
        lEIntoAFile->setObjectName(QString::fromUtf8("lEIntoAFile"));
        lEIntoAFile->setGeometry(QRect(10, 40, 231, 20));
        lEIntoAScreen = new QLineEdit(output);
        lEIntoAScreen->setObjectName(QString::fromUtf8("lEIntoAScreen"));
        lEIntoAScreen->setGeometry(QRect(10, 80, 231, 20));
        lEIntoAScreen->setReadOnly(true);
        enter = new QGroupBox(centralWidget);
        enter->setObjectName(QString::fromUtf8("enter"));
        enter->setGeometry(QRect(10, 0, 241, 111));
        fromFile = new QRadioButton(enter);
        fromFile->setObjectName(QString::fromUtf8("fromFile"));
        fromFile->setGeometry(QRect(10, 20, 82, 17));
        fromKeyBoard = new QRadioButton(enter);
        fromKeyBoard->setObjectName(QString::fromUtf8("fromKeyBoard"));
        fromKeyBoard->setGeometry(QRect(10, 60, 82, 17));
        lEFromFile = new QLineEdit(enter);
        lEFromFile->setObjectName(QString::fromUtf8("lEFromFile"));
        lEFromFile->setGeometry(QRect(10, 40, 221, 20));
        lEFromKeyboard = new QLineEdit(enter);
        lEFromKeyboard->setObjectName(QString::fromUtf8("lEFromKeyboard"));
        lEFromKeyboard->setGeometry(QRect(10, 80, 221, 20));
        lEStatus = new QLineEdit(centralWidget);
        lEStatus->setObjectName(QString::fromUtf8("lEStatus"));
        lEStatus->setGeometry(QRect(280, 120, 231, 20));
        lEStatus->setReadOnly(true);
        Start = new QPushButton(centralWidget);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setGeometry(QRect(90, 120, 75, 23));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(220, 120, 51, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        output->setTitle(QApplication::translate("MainWindow", "output", 0, QApplication::UnicodeUTF8));
        intoAFile->setText(QApplication::translate("MainWindow", "into a file", 0, QApplication::UnicodeUTF8));
        intoAScreen->setText(QApplication::translate("MainWindow", "into a screen", 0, QApplication::UnicodeUTF8));
        enter->setTitle(QApplication::translate("MainWindow", "enter", 0, QApplication::UnicodeUTF8));
        fromFile->setText(QApplication::translate("MainWindow", "from file", 0, QApplication::UnicodeUTF8));
        fromKeyBoard->setText(QApplication::translate("MainWindow", "from keyboard", 0, QApplication::UnicodeUTF8));
        Start->setText(QApplication::translate("MainWindow", "start", 0, QApplication::UnicodeUTF8));
        label_status->setText(QApplication::translate("MainWindow", "status bar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
