#ifndef TASK_H
#define TASK_H
#include "hash.h"


class Task : Hash
{
public:
    Task();
    Node* MinKey(Node**);
};

#endif // TASK_H
