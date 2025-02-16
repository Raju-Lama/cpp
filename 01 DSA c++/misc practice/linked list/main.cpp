#include <iostream>
//basic node creation

struct Node
{
    //creating node
    int data;
    Node* next{nullptr};
};

class LinkedList
{
    Node* head;
public:
    LinkedList()
        : head{nullptr}
    {
    }

    void list()
    {
        Node* node1 = new Node{5};
        Node* node2 = new Node{6};
        Node* node3 = new Node{7};

        head = node1;
        head->next = node2;
        node2->next = node3;
        node3->next = nullptr;
    }

    void display()
    {
        Node* current = head;
        while(current != nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr ";
    }

};
int main()
{
    LinkedList nodes;
    nodes.list();
    nodes.display();

    return 0;
}
