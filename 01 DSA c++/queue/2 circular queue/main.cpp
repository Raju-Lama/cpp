#include <iostream>
/*
using linked list
we need not use the formula
rear=(rear+1)%MAX_SIZE)
or front=(front+1)%MAX_SIZE
every time enqueue or dequeue
but, we use this only for array implementation of queue
*/

struct Node
{
    int data;
    Node* next;
};
class CircularQueue
{
private:
    Node* head;
    Node* rear;
    int capacity;
    int total_size;

public:
    CircularQueue(int capacity)
        :head{nullptr},
         rear{nullptr},
         capacity{capacity},
         total_size{0}
         {
         }

    //~CircularQueue(){};

    bool isfull()
    {
        return capacity==total_size;
    }

    bool isempty()
    {
        return (total_size==0);
    }

    void enqueue(int value)
    {
        Node* new_node = new Node{value};

        if(isfull()) std::cout << "Overflow!";

        if(isempty())
        {
            rear=head=new_node;
            rear->next=head;
        }
        else
        {
            rear->next=new_node;
            rear=new_node;
            rear->next=head;
        }
        total_size++;
    }

    void traverse()
    {
        if(isempty())
        {
            std::cout << "Empty Queue!";
            return;
        }

        Node* current = head;

        do
        {
            std::cout << current->data << " -> ";
            current = current->next;
        } while(current!=head);
        std::cout << "nullptr\n\n";
    }
};

int main()
{
    CircularQueue q{3};
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.traverse();
    return 0;
}
