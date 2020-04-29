#ifndef TREE_H
#define TREE_H


#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Node
{
public:
  int key;
  string name;
  unsigned char height;
  Node* left;
  Node* right;
  Node();
  Node(int k, string str) {key = k; name = str; left = right = nullptr; height = 1;}
};

class Tree
{
    void FixHeight(Node*);
    int BFactor(Node*);
    Node* RotateLeft(Node* );
    Node* RotateRight(Node*);
    Node* FindMin(Node*);
    Node* RemoveMin(Node*);
public:
    Tree();
    unsigned char Height(Node*);
    Node* Add(Node*,int, string);
    Node* Remove(Node*, int);
    Node* Find(Node*, int);
    vector<Node> PreOrderTree(Node*);
    vector<Node> PostOrderTree(Node*);
    vector<Node> SymmetricOrderTree(Node*);
    Node* Balance(Node*);
    vector<Node> vect;
    Node *tmp;
};

#endif // TREE_H
