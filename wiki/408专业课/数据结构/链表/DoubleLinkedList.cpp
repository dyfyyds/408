#include "DoubleLinkedList.h"

DoubleLinkedList::DoubleLinkedList()
{
    head = nullptr;
}

DoubleLinkedList::~DoubleLinkedList()
{
    while(head != nullptr)
    {
        DNode* temp = head;
        head = head->next;
        delete temp;
    }
    std::cout << "双链表节点已删除" << std::endl;
}

auto DoubleLinkedList::insertHead(int data) -> void
{
    DNode* newNode = new DNode(data);
    newNode->next = head;
    if (head)
    {
        head->prev = newNode;
    }
    head = newNode;
}

auto DoubleLinkedList::insertTail(int data) -> void
{
    DNode* newNode = new DNode(data);
    if (!head)
    {
        head = newNode;
        return;
    }
    DNode* temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

auto DoubleLinkedList::remove(int data) -> void
{
    DNode* temp = head;
    while (temp){
        if(temp->data == data){
            if(temp->prev){
                temp->prev->next = temp->next;
            }
            else{
                head = temp->next;
            }
            if(temp->next){
                temp->next->prev = temp->prev;
            }
            delete temp;
            return;
        }
        temp = temp->next;
    }
}

auto DoubleLinkedList::print() -> void
{
    DNode* temp = head;
    while (temp)
    {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "nullptr" <<std::endl;
}
