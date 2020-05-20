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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Search_min_keyButton;
    QSplitter *splitter;
    QLineEdit *KeyEdit;
    QLineEdit *NameEdit;
    QSplitter *splitter_2;
    QPushButton *AddButton;
    QPushButton *Add_random_elementButton;
    QPushButton *DeleteButton;
    QPushButton *SearchButton;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QListWidget *MinKey_listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Search_min_keyButton = new QPushButton(centralwidget);
        Search_min_keyButton->setObjectName(QString::fromUtf8("Search_min_keyButton"));
        Search_min_keyButton->setGeometry(QRect(170, 360, 151, 41));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(170, 110, 281, 31));
        splitter->setOrientation(Qt::Horizontal);
        KeyEdit = new QLineEdit(splitter);
        KeyEdit->setObjectName(QString::fromUtf8("KeyEdit"));
        splitter->addWidget(KeyEdit);
        NameEdit = new QLineEdit(splitter);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        splitter->addWidget(NameEdit);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(480, 110, 129, 151));
        splitter_2->setOrientation(Qt::Vertical);
        AddButton = new QPushButton(splitter_2);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        splitter_2->addWidget(AddButton);
        Add_random_elementButton = new QPushButton(splitter_2);
        Add_random_elementButton->setObjectName(QString::fromUtf8("Add_random_elementButton"));
        splitter_2->addWidget(Add_random_elementButton);
        DeleteButton = new QPushButton(splitter_2);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        splitter_2->addWidget(DeleteButton);
        SearchButton = new QPushButton(splitter_2);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        splitter_2->addWidget(SearchButton);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 90, 55, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 90, 55, 16));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(170, 150, 281, 201));
        MinKey_listWidget = new QListWidget(centralwidget);
        MinKey_listWidget->setObjectName(QString::fromUtf8("MinKey_listWidget"));
        MinKey_listWidget->setGeometry(QRect(330, 360, 121, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        Search_min_keyButton->setText(QCoreApplication::translate("MainWindow", "Search data witn min key", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        Add_random_elementButton->setText(QCoreApplication::translate("MainWindow", "Add random element", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        SearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
