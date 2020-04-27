#include "task.h"

void Task::Sort(Task task){
    if(!IsEmpty()){
        Node* elem1 = new Node();
        Node* elem2 = new Node();
        Node* temp = new Node();
        elem1 = task.Front()->next;
        for(; elem1 != nullptr; elem1 = elem1->next){
            for(elem2 = elem1; elem2 != task.Front(); elem2 = elem2->prev){
                if (elem2->num < elem2->prev->num){
                    temp->num = elem2->num;
                    elem2->num = elem2->prev->num;
                    elem2->prev->num = temp->num;
                }
            }
        }
    }
}
