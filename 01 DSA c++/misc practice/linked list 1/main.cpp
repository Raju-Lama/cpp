#include <iostream>
// linked list

// data->pointer == node

struct Node
{
    int data;
    Node* next;
    //pointer
    //data->pointer->data->pointer->nullptr

};

class LinkedList
{
private:
    Node* head;
    //top of the data structure/linked list
public:
    LinkedList()
        :head{nullptr}
    {
    }
    //constructor

    void basic_linkedlist()
    {
        Node* first_node = new Node(5);
        head = first_node;

        Node* second_node = new Node(6);
        Node* third_node = new Node(7);


    }

public:

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
