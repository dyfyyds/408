#include "LinkedList.h"

LinkedList::~LinkedList()
{
    Node* current = head;
    while(current){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    std::cout << "链表节点全部释放" << std::endl;
}

auto LinkedList::insertHead(int x) -> void
{
    Node* newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

auto LinkedList::insertTail(int x) -> void
{
    Node* newNode = new Node(x);
    if(!head){
        head = newNode;
    }
    else{
        Node* cur = head;
        while(cur->next){
            cur = cur->next;
        }
        cur->next = newNode;
    }
}

auto LinkedList::printList() -> void
{
    Node* current = head;
    while(current){
        std::cout << current->val << "->";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

auto LinkedList::deleteNode(int x) -> void
{
    if(!head){
        return;
    }
    if(head->val == x){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    while(current->next && current->next->val != x){
        current = current->next;
    }
    if(current->next){
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

auto LinkedList::findNode(int x) -> Node *
{
    Node* current = head;
    while(current){
        if(current->val == x){
            return current;
        }
        current = current->next;
    }
    return nullptr;
}
