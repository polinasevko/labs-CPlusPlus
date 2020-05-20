#include "stack1.h"

// Добавление узлов списка
void List1::Add(char sign, Stack1 *p)
{
    Stack1 *elem = new Stack1();
    elem->sign = sign;
    if(sign == '+' || sign == '-'){
        elem->prior = 2;    }
    else if(sign == '('){
        elem->prior = 1;    }
    else if(sign == '/' || sign == '*'){
        elem->prior = 3;    }
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
Stack1* List1::Next(Stack1* p)
{
    if (isEmpty()){
        return NULL;
    }
    return p->ptr;
}

// Получение последнего узла списка
Stack1* List1::getLast()
{
    Stack1* p = head;
    while (Next(p) != NULL) {
        p = Next(p);
    }
    return p;
}

// Переход к предыдущему узлу
Stack1* List1::Prev(Stack1* p)
{
    if (isEmpty()) {
        return NULL;
    }
    if (p == head) {
        return NULL;
    }
    Stack1 *prev = head;
    while (prev->ptr != p) {
        prev = prev->ptr;
    }
    return prev;
}

// Удаление узла
Stack1* List1::Delete(Stack1* p)
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
        Stack1* prev = Prev(p);
        prev->ptr = p->ptr;
        delete p;
        return prev;
    }
}

bool List1::Prior(char sign){
    int pr = 0;
    if(sign == '+' || sign == '-'){
        pr = 2;
    }
    else if(sign == '('){
        pr = 1;
    }
    else if(sign == '/' || sign == '*'){
        pr = 3;
    }
    Stack1* p = getLast();
    if(p == NULL){
        return true;
    }
    else if(p->prior >= pr){
        return false;
    }
    else{
        return true;
    }
}

//Свойства
Stack1* List1::getHead(){
    return head;
}

char List1::getSign(Stack1 *p){
    return p->sign;
}
