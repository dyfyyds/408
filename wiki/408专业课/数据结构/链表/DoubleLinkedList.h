#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include "DNode.h"
#include <iostream>

class DoubleLinkedList {
private:
    DNode* head = nullptr;
public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    auto insertHead(int data)->void;
    auto insertTail(int data)->void;
    auto remove(int data)->void;
    auto print()->void;
};


#endif