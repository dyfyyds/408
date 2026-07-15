#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>


class LinkedList final{
private:
    Node* head = nullptr;
public:
    LinkedList(): head(nullptr) {}

    //析构函数
    ~LinkedList();

    //头插
    auto insertHead(int x)->void;
    //尾插
    auto insertTail(int x)->void;

    //打印链表
    auto printList() -> void;

    //删除链表中值为x的节点
    auto deleteNode(int x)-> void;

    //查找链表中值为x的节点
    auto findNode(int x) -> Node*;
    
};




#endif