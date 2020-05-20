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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QTreeWidget *treeWidget;
    QPushButton *BuildTreeButton;
    QPushButton *DepthButton;
    QListWidget *Depth;
    QSplitter *splitter;
    QPushButton *AddButton;
    QPushButton *SearchButton;
    QPushButton *RemoveButton;
    QSplitter *splitter_2;
    QLineEdit *KeyEdit;
    QLineEdit *NameEdit;
    QSplitter *splitter_3;
    QPushButton *PreButton;
    QPushButton *PostButton;
    QPushButton *SymButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 40, 256, 192));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(30, 270, 256, 192));
        BuildTreeButton = new QPushButton(centralwidget);
        BuildTreeButton->setObjectName(QString::fromUtf8("BuildTreeButton"));
        BuildTreeButton->setGeometry(QRect(380, 370, 241, 25));
        DepthButton = new QPushButton(centralwidget);
        DepthButton->setObjectName(QString::fromUtf8("DepthButton"));
        DepthButton->setGeometry(QRect(680, 150, 80, 25));
        Depth = new QListWidget(centralwidget);
        Depth->setObjectName(QString::fromUtf8("Depth"));
        Depth->setGeometry(QRect(670, 180, 101, 31));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(380, 100, 240, 25));
        splitter->setOrientation(Qt::Horizontal);
        AddButton = new QPushButton(splitter);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        splitter->addWidget(AddButton);
        SearchButton = new QPushButton(splitter);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        splitter->addWidget(SearchButton);
        RemoveButton = new QPushButton(splitter);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        splitter->addWidget(RemoveButton);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(380, 60, 241, 24));
        splitter_2->setOrientation(Qt::Horizontal);
        KeyEdit = new QLineEdit(splitter_2);
        KeyEdit->setObjectName(QString::fromUtf8("KeyEdit"));
        splitter_2->addWidget(KeyEdit);
        NameEdit = new QLineEdit(splitter_2);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        splitter_2->addWidget(NameEdit);
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(380, 220, 241, 75));
        splitter_3->setOrientation(Qt::Vertical);
        PreButton = new QPushButton(splitter_3);
        PreButton->setObjectName(QString::fromUtf8("PreButton"));
        splitter_3->addWidget(PreButton);
        PostButton = new QPushButton(splitter_3);
        PostButton->setObjectName(QString::fromUtf8("PostButton"));
        splitter_3->addWidget(PostButton);
        SymButton = new QPushButton(splitter_3);
        SymButton->setObjectName(QString::fromUtf8("SymButton"));
        splitter_3->addWidget(SymButton);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        BuildTreeButton->setText(QCoreApplication::translate("MainWindow", "BuildTreeButton", nullptr));
        DepthButton->setText(QCoreApplication::translate("MainWindow", "Depth", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        SearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        RemoveButton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        PreButton->setText(QCoreApplication::translate("MainWindow", "PreButton", nullptr));
        PostButton->setText(QCoreApplication::translate("MainWindow", "PostButton", nullptr));
        SymButton->setText(QCoreApplication::translate("MainWindow", "SymButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
