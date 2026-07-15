#ifndef DNODE_H
#define DNODE_H

struct DNode {
    int data;
    DNode* prev;
    DNode* next;

    DNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

#endif