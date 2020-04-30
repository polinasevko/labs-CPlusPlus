#include "mainwindow.h"
#include "ui_mainwindow.h"

Hash *hashFunc = new Hash();

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


void MainWindow::on_AddButton_clicked()
{
    int key = ui->KeyEdit->text().toInt();
    string name = ui->NameEdit->text().toStdString();
    Node *elem = new Node();
    elem = hashFunc->Add(key, name);
    if(!elem){
        QMessageBox::critical(0, "Critical error", "This key already exists");
    }
    Print();
}

void MainWindow::on_Add_random_elementButton_clicked()
{
    qsrand(qrand());
    int num = qrand() % 100;
    string name = ui->NameEdit->text().toStdString();
    hashFunc->Add(num, name);
    Print();
}

void MainWindow::on_DeleteButton_clicked()
{
    int key = ui->KeyEdit->text().toInt();
    hashFunc->Delete(key);
    Print();
}

void MainWindow::on_SearchButton_clicked()
{
    ui->listWidget->clear();
    int key = ui->KeyEdit->text().toInt();
    Node *elem = new Node();
    elem = hashFunc->Search(key);
    if(elem == NULL){
        ui->listWidget->addItem("Item not found");
    }
    else{
        ui->listWidget->addItem(QString::number(elem->key) + " " + QString::fromStdString(elem->name));
    }
}

void MainWindow::on_Search_min_keyButton_clicked()
{
    ui->MinKey_listWidget->clear();
    Node* elem = new Node();
    Task *minKey = new Task();
    elem = minKey->MinKey(hashFunc->GetElems());
    if(elem == NULL){
        ui->MinKey_listWidget->addItem("Item not found");
    }
    else{
        ui->MinKey_listWidget->addItem(QString::number(elem->key) + " " + QString::fromStdString(elem->name));
    }}

void MainWindow::Print()
{
    ui->listWidget->clear();
    Node **hash = new Node*[SIZE];
    Node *elem = new Node();
    hash = hashFunc->GetElems();
    for(int i = 0; i < SIZE; i++){
        if(hash[i] != NULL){
            elem = hash[i];
            while(elem){
                ui->listWidget->addItem(QString::number(elem->key) + " " + QString::fromStdString(elem->name));
                elem = elem->ptr;
            }
        }
    }
}
