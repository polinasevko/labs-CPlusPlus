#include "task.h"

Task::Task()
{

}

Node* Task::MinKey(Node **hash){
//    Node **hash = new Node*[SIZE];
//    hash = GetElems();
    Node *min = NULL;
    Node *elem = new Node();
    for(int i = 0, counter = 0; i < SIZE; i++){
        if(hash[i] != NULL){
            counter++;
            if(counter == 1){
                min = hash[i];
            }
            elem = hash[i];
            while(elem){
                if(min->key > elem->key){
                    min = elem;
                }
                elem = elem->ptr;
            }
        }
    }
    return min;
}
