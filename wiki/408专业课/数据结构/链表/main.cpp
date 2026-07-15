#include "LinkedList.h"
#include "DoubleLinkedList.h"


int main()
{
    LinkedList list;
    list.insertHead(1);
    list.insertTail(2);
    list.insertTail(3);
    list.printList();

    list.deleteNode(2);
    list.printList();

    Node* found = list.findNode(3);
    if(found){
        std::cout << "找到了节点，值为: " << found->val << std::endl;
    }
    else{
        std::cout << "未找到节点" << std::endl;
    }


    DoubleLinkedList dlist;
    dlist.insertHead(1);
    dlist.insertTail(2);
    dlist.insertTail(3);

    dlist.print();

    dlist.remove(2);
    dlist.print();
    return 0;
}