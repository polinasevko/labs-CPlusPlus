#ifndef STACK1_H
#define STACK1_H
#include <string>

using namespace std;

class Stack1
{
    char sign;
    int prior;
public:
    class Stack1 *ptr;
    friend class List1;
};

class List1
{
    Stack1 *head;
public:
    // Конструктор
    List1() { head = NULL; }
    // Методы
    bool isEmpty() { return head == NULL; }
    Stack1* Next(Stack1 *);
    Stack1* Prev(Stack1 *);
    void Add(char, Stack1*);
    Stack1* Delete(Stack1 *);
    bool Prior(char);
    Stack1* getLast();

    // Свойства
    Stack1* getHead();
    char getSign(Stack1*);
};


#endif // STACK1_H
