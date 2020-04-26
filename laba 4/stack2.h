#ifndef STACK2_H
#define STACK2_H
#include <string>

using namespace std;

class Stack2
{
    double variable;
public:
    class Stack2 *ptr;
    friend class List2;
};

class List2
{
    Stack2 *head;
public:
    // Конструктор
    List2() { head = NULL; }
    // Методы
    bool isEmpty() { return head == NULL; }
    Stack2* Next(Stack2 *);
    Stack2* Prev(Stack2 *);
    void Add(double, Stack2*);
    Stack2* Delete(Stack2 *);
    Stack2* getLast();

    // Свойства
    Stack2* getHead();
    double getVariable(Stack2*);
};

#endif // STACK2_H
