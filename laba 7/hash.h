#ifndef HASH_H
#define HASH_H
#define SIZE 10
#include <string>

using namespace std;

struct Node
{
    int key;
    string name;
    Node* ptr;
    friend class Hash;
};

class Hash
{
    Node **hash = new Node*[SIZE];
    int HashFunc(int);
    Node* Prev(Node*, int);
public:
    Hash();
    Node* Add(int, string);
    Node* Delete(int);
    Node* Search(int);
    Node** GetElems();
    bool CheckKey(Node*, int);

};


#endif // HASH_H
