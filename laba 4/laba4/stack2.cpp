#include "stack2.h"

void List2::Add(double variable, Stack2 *p)
{
    Stack2 *elem = new Stack2();
    elem->variable = variable;
    if (head == NULL) {
        elem->ptr = NULL;
        head = elem;
    }
    else {
        elem->ptr = p->ptr;
        p->ptr = elem;
    }
}

// Переход к следующему узлу
Stack2* List2::Next(Stack2* p)
{
    if (isEmpty()){
        return NULL;
    }
    return p->ptr;
}

// Получение последнего узла списка
Stack2* List2::getLast()
{
    Stack2* p = head;
    while (Next(p) != NULL) {
        p = Next(p);
    }
    return p;
}

// Переход к предыдущему узлу
Stack2* List2::Prev(Stack2* p)
{
    if (isEmpty()) {
        return NULL;
    }
    if (p == head) {
        return NULL;
    }
    Stack2 *prev = head;
    while (prev->ptr != p) {
        prev = prev->ptr;
    }
    return prev;
}

// Удаление узла
Stack2* List2::Delete(Stack2* p)
{
    if (p == NULL) {
        return NULL;
    }
    else {
        if (p == head)
        {
        head = p->ptr;
        delete p;
        return head;
        }
        Stack2* prev = Prev(p);
        prev->ptr = p->ptr;
        delete p;
        return prev;
    }
}

//Свойства
Stack2* List2::getHead(){
    return head;
}

double List2::getVariable(Stack2* p){
    return p->variable;
}
