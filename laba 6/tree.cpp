#include "tree.h"

Tree::Tree()
{

}
unsigned char Tree::Height(Node *p)
{
	return p?p->height:0;
}

void Tree::FixHeight(Node *p)
{
	unsigned char hl = Height(p->left);
	unsigned char hr = Height(p->right);
	p->height = (hl>hr?hl:hr)+1;
}

int Tree::BFactor(Node *p)
{
	return Height(p->right) - Height(p->left);
}

Node* Tree::RotateLeft(Node *q)
{
    Node* p = q->right;
    if(!p)
        return q;

    q->right = p->left;
    p->left = q;
    FixHeight(q);
    FixHeight(p);
    return p;
}

Node* Tree::RotateRight(Node *p)
{
    Node* q = p->left;
    if(!q)
        return p;

    p->left = q->right;
    q->right = p;
    FixHeight(p);
    FixHeight(q);
    return q;
}

Node* Tree::Balance(Node *p)
{
    FixHeight(p);
    if(BFactor(p) == 2)
    {
        if(BFactor(p->right) < 0)
            p->right = RotateRight(p->right);

        return RotateLeft(p);
    }
    if(BFactor(p) == -2)
    {
        if(BFactor(p->left) > 0)
            p->left = RotateLeft(p->left);

        return RotateRight(p);
    }
    return p;
}

Node* Tree::Add(Node *p, int k, string a)
{
    if(!p)
        return new Node(k, a);
    if(k < p->key)
        p->left = Add(p->left, k, a);

    else
        p->right = Add(p->right, k, a);

    return Balance(p);
}

Node* Tree::FindMin(Node *p)
{
    return p->left?FindMin(p->left):p;
}

Node* Tree::RemoveMin(Node *p)
{
    if(p->left == 0)
        return p->right;
    p->left = RemoveMin(p->left);
    return Balance(p);
}

Node* Tree::Remove(Node *p, int k)
{
    if(!p)
        return 0;
    if(k < p->key)
        p->left = Remove(p->left, k);
    else if (k > p->key)
        p->right = Remove(p->right, k);
    else
    {
        Node *l = p->left;
        Node *r = p->right;
        delete p;
        if(!r)
            return l;
        Node *min = FindMin(r);
        min->right = RemoveMin(r);
        min->left = l;
        return Balance(min);
    }
    return Balance(p);
}

Node* Tree::Find(Node *p, int k)
{
    if(!p) return 0;
    if(k == p->key)
    {
        return p;
    }
    if(k < p->key)
    {
        return Find(p->left, k);
    }
    else return Find(p->right, k);
}

vector<Node> Tree::PreOrderTree(Node *p)
{
    if(p)
    {
        tmp = p;
        vect.push_back(*tmp);
        PreOrderTree(p->left);
        PreOrderTree(p->right);
    }
    return vect;
}

vector<Node> Tree::PostOrderTree(Node *p)
{
    if(p)
    {
        PostOrderTree(p->left);
        PostOrderTree(p->right);
        tmp = p;
        vect.push_back(*tmp);
    }
    return vect;
}

vector<Node> Tree::SymmetricOrderTree(Node *p)
{
    if(p)
    {
        SymmetricOrderTree(p->left);
        tmp = p;
        vect.push_back(*tmp);
        SymmetricOrderTree(p->right);
    }
    return vect;
}
