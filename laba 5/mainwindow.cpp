#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "task.h"
#include "queue.h"
#include <QMessageBox>
#include <QRandomGenerator>

Task qu;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Add_clicked()
{
    QString line = ui->lineEdit->text();
    bool ok;
    int num = line.toInt(&ok);
    if(!ok){
        QMessageBox::critical(0, "Critical error", "Wrong input");
    }
    else{
        qu.Push(num);
        ui->listWidget->addItem(qu.Show(qu.Back()));
    }
}

void MainWindow::on_Add_random_element_clicked()
{
    qsrand(qrand());
    int num = qrand() % 100;
    qu.Push(num);
    ui->listWidget->addItem(qu.Show(qu.Back()));
}


void MainWindow::on_Sort_clicked()
{
    ui->listWidget->clear();
    qu.Sort(qu);
    Node* elem = new Node();
    elem = qu.Front();
    while(elem != nullptr){
        ui->listWidget->addItem(qu.Show(elem));
        elem = elem->next;
    }
}

