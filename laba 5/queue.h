#ifndef QUEUE_H
#define QUEUE_H
#include <QString>

class Node {
    int num;
public:
    Node *next;
    Node *prev;
    friend class Queue;
    friend class Task;
};


class Queue
{
    Node *head;
    Node *tail;
public:
    Queue();
    QString Show(Node*);
    void Push(int); // вставка в конец
    void Pop(); // удаление первого элемента
    bool IsEmpty();

    Node* Back(); // обращение к последнему элементу
    Node* Front(); // обращение к первому элементу
};

#endif // QUEUE_H
