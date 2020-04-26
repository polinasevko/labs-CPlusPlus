#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stack1.h"
#include "stack2.h"
#include <string>
#include <QMessageBox>

List1 listok;
List2 listik;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "a" << "b" << "c" << "d" << "e");
    ui->tableWidget->setVerticalHeaderLabels(QStringList() << "");
    for(int i = 0; i < ui->tableWidget->rowCount(); i++){
        for(int j = 0; j < ui->tableWidget->columnCount(); j++){
            QTableWidgetItem *item = new QTableWidgetItem(tr("%1").arg(0));
            ui->tableWidget->setItem(i, j, item);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Calculate_clicked()
{
    QString qstr = ui->Expression->text();
    string expr = qstr.toStdString();
    for(int i = 0; i < (int)expr.length(); i++){
        if(expr[i] != '+' && expr[i] != '-' && expr[i] != '*' && expr[i] != '/' && expr[i] != '('
                && expr[i] != ')' && expr[i] != 'a' && expr[i] != 'b' && expr[i] != 'c' && expr[i] != 'd' && expr[i] != 'e'){
            QMessageBox::critical(0, "Critical error", "Wrong input");
            exit(0);
        }
    }
    string rez;
    Stack1 *p;
    for(int i = 0; i < (int)expr.length(); i++){
        p = listok.getLast();
        if(expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/'){
            if(listok.Prior(expr[i])){
                listok.Add(expr[i], p);
            }
            else{
                while(!listok.Prior(expr[i])){
                    rez += listok.getSign(p);
                    p = listok.Delete(p);
                }
                listok.Add(expr[i], p);
            }
        }
        else if(expr[i] == '('){
            listok.Add(expr[i], p);
        }
        else if(expr[i] == ')'){
            while(listok.getSign(p) != '('){
                rez += listok.getSign(p);
                p = listok.Delete(p);
            }
            p = listok.Delete(p);
        }
        else{
            rez += expr[i];
        }
    }
    while(p != NULL){
        rez += listok.getSign(p);
        p = listok.Delete(p);
    }
    ui->Reverse->setText(QString::fromStdString(rez));
    double a = 0, b = 0, c = 0, d = 0, e = 0, temp = 0, op1 = 0, op2 = 0;
    Stack2 *point;
    a = ui->tableWidget->item(0,0)->text().toDouble();
    b = ui->tableWidget->item(0,1)->text().toDouble();
    c = ui->tableWidget->item(0,2)->text().toDouble();
    d = ui->tableWidget->item(0,3)->text().toDouble();
    e = ui->tableWidget->item(0,4)->text().toDouble();
    for(int i = 0; i < (int)rez.length(); i++){
        point = listik.getLast();
        if(rez[i] == '+' || rez[i] == '-' || rez[i] == '/' || rez[i] == '*'){
            op1 = listik.getVariable(point);
            point = listik.Delete(point);
            op2 = listik.getVariable(point);
            point = listik.Delete(point);
            switch(rez[i]){
            case '+': temp = op1 + op2; break;
            case '-': temp = op2 - op1; break;
            case '*': temp = op1 * op2; break;
            case '/': temp = op2 / op1; break;
            }
            listik.Add(temp, point);
        }
        else{
            switch(rez[i]){
            case 'a': temp = a; break;
            case 'b': temp = b; break;
            case 'c': temp = c; break;
            case 'd': temp = d; break;
            case 'e': temp = e; break;
            }
            listik.Add(temp, point);
        }
    }
    point = listik.getLast();
    ui->Result->setText(QString::number(listik.getVariable(point)));
}
