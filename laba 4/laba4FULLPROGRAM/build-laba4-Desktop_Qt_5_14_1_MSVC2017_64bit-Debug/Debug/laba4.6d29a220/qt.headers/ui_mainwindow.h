/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Calculate;
    QTableWidget *tableWidget;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *Expression;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *Reverse;
    QSplitter *splitter_3;
    QLabel *label_3;
    QLineEdit *Result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(770, 370);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Calculate = new QPushButton(centralwidget);
        Calculate->setObjectName(QString::fromUtf8("Calculate"));
        Calculate->setGeometry(QRect(630, 80, 91, 61));
        Calculate->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(100, 80, 521, 61));
        splitter_4 = new QSplitter(centralwidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setGeometry(QRect(100, 150, 621, 71));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(label);
        Expression = new QLineEdit(splitter);
        Expression->setObjectName(QString::fromUtf8("Expression"));
        Expression->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(Expression);
        splitter_4->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        splitter_2->addWidget(label_2);
        Reverse = new QLineEdit(splitter_2);
        Reverse->setObjectName(QString::fromUtf8("Reverse"));
        Reverse->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        splitter_2->addWidget(Reverse);
        splitter_4->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        splitter_3->addWidget(label_3);
        Result = new QLineEdit(splitter_3);
        Result->setObjectName(QString::fromUtf8("Result"));
        Result->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        splitter_3->addWidget(Result);
        splitter_4->addWidget(splitter_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 770, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Calculate->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Expression", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Reverse polish notation", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
