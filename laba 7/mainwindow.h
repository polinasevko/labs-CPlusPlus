#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "hash.h"
#include "task.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AddButton_clicked();

    void on_Add_random_elementButton_clicked();

    void on_DeleteButton_clicked();

    void on_SearchButton_clicked();

    void on_Search_min_keyButton_clicked();

    void Print();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
