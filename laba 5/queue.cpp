#include "queue.h"

Queue::Queue()
{
    head = nullptr;
    tail = nullptr;
}

bool Queue::IsEmpty()
{
    if(head == nullptr) {
        return true;
    }
    else {
        return false;
    }
}

void Queue::Push(int x)
{
	Node* elem = new Node();
	elem->num = x;
	if(head == nullptr)
	{
		elem->prev = nullptr;
		head = elem;
		tail = elem;
	}
	else
	{
		elem->prev = tail;
		tail->next = elem;
		tail = elem;
	}
	elem->next = nullptr;
}

void Queue::Pop()
{
	if(!IsEmpty()){
	Node* elem = new Node();
	elem = head->next;
	delete head;
	head = elem;
	}
}

Node* Queue::Front()
{
	if(IsEmpty()){
		return nullptr;
	}
	return head;
}

Node* Queue::Back()
{
	if(IsEmpty()){
		return nullptr;
	}
	return tail;
}

QString Queue::Show(Node* elem){
	return QString::number(elem->num);
}
