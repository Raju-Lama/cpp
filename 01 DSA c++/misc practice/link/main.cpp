#include <iostream>
//linked list
// head->next->data->next->data->next
// node
// node = data and pointer(next)
struct Node
{
    int data;
    Node* next=nullptr;
};

class Linkedlist
{
    Node* head;
    //Node* tail;
    //doubly linked list
    //singly linked list
public:
    Linkedlist()
     :head{nullptr}
     {
     }

    void insert_at_beginning(int value)
    {
        Node* new_node = new Node{value};
        head = new_node;
        head = head->next;
    }

    void display()
    {
        Node* current = head;

        while(current!=nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "\n\n";
    }
};

int main()
{
    Linkedlist obj;
    obj.insert_at_beginning(5);
    obj.insert_at_beginning(6);
    obj.insert_at_beginning(7);

    //ADT
    //obj.insert_at_end(6);

    obj.display();

    return 0;
}
