#include "hash.h"

Hash::Hash()
{
    for(int i = 0; i < SIZE; i++){
        hash[i] = NULL;
    }
}

int Hash::HashFunc(int key) {
  return (key % SIZE);
}

Node* Hash::Add(int key, string name){
    int ind = HashFunc(key);
    Node *p = new Node();
    if(CheckKey(hash[ind], key)){
        return NULL;
    }
    p->key = key;
    p->name = name;
    p->ptr = hash[ind];
    hash[ind] = p;
    return hash[ind];
}

Node* Hash::Prev(Node* p, int key)
{
    Node *elem = new Node();
    int ind = HashFunc(key);
    elem = hash[ind];
    if(elem == p){
        return NULL;
    }
    else{
        while (elem->ptr != p) {
            elem = elem->ptr;
        }
    }
    return elem;
}

Node* Hash::Delete(int key){
    int ind = HashFunc(key);
    Node *p = new Node();
    p = hash[ind];
    while(p){
        if(p->key == key){
            Node* prev = Prev(p, key);
            if(prev){
                prev->ptr = p->ptr;
                p = p->ptr;
            }
            else{
                p = p->ptr;
                hash[ind] = p;
            }
            return p;
        }
        p = p->ptr;
    }
    return NULL;

}

Node* Hash::Search(int key){
    int ind = HashFunc(key);
    Node *p = new Node();
    p = hash[ind];
    while(p){
        if(p->key == key){
            return p;
        }
        p = p->ptr;
    }
    return NULL;
}

Node** Hash::GetElems(){
    return hash;
}

bool Hash::CheckKey(Node* p, int key){
    while(p){
        if(p->key == key){
            return 1;
        }
        p = p->ptr;
    }
    return 0;
}
