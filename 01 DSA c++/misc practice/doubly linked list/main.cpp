#include <iostream>
//doubly linked list

struct Node
{
    int data;
    //to store data value
    Node* prev{nullptr};
    //to point to the previous node
    Node* next{nullptr};
    // to point next node
};

class LinkedList
{
    Node* head;
    Node* tail;
    //we need head and tail for a doubly linked list

public:
    LinkedList()
        :head{nullptr},
         tail{nullptr}
    {
    }

    void createList()
    {
        Node* node1 = new Node{5};
        Node* node2 = new Node{6};
        Node* node3 = new Node{7};

        head = node1;
        tail = node3;
        //node3 the last node and tail are the same, they point to the same memory

        head->next = node2;
        node2->prev = head;

        node2->next = node3;
        node3->prev = node2;
        //or tail->prev = node2;

        head->prev = nullptr;
        tail->next = nullptr;
        //both head and tail points to null ptr
    }

    void traverseForward()
    {
        //traversing from the beginning
        Node* current = head;

        while(current != nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }

        std::cout << "nullptr \n\n";
    }

    void traverseBackward()
    {
        Node* current = tail;

        while(current != nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->prev;
        }

        std::cout << "nullptr \n\n";
    }
};

int main()
{
    LinkedList nodes;
    nodes.createList();
    nodes.traverseForward();
    nodes.traverseBackward();

    return 0;
}
