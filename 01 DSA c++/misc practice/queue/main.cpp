#include <iostream>
//queue has enqueue and dequeue
//we insert from the rear(enqueue), and delete from the front(dequeue)
//if the queue is empty front = rear = nullptr
//if queue has one element, front = rear = element
//First in First out (FIFO) structure

struct Node
{
    int data;
    Node* next{nullptr};
};

class Queue
{
    Node* rear;
    Node* head;
    //front seems to be the keyword

public:
    Queue()
      :rear{nullptr},
       head{nullptr}
       {
       }
    ~Queue() = default;

    bool isempty()
    {
        return head==nullptr;
        //if the head is empty the queue is empty
    }

    void enqueue(int value)
    {
        Node* new_node = new Node{value};

        if(isempty())
        {
            head=rear = new_node;
            //insert first element if there aren't any
        }
        else
        {
            rear->next = new_node;
            rear = new_node;
        }
    }

    void dequeue()
    {
        if(isempty())
        {
            std::cout << "Underflow! Queue is empty!";
        }

        if(head==nullptr)
        {
            rear=nullptr;
            //set rear == nullptr if head is nullptr
            return;
        }

        Node* node_to_delete = head;
        head = head->next;

        delete node_to_delete;
        std::cout << "Dequeue!\n\n";
    }

    void getrear()
    {
        if(!isempty())
        {
            std::cout << "rear :: " << rear->data << "\n\n";
        }
    }

    void getfront()
    {
        if(!isempty())
        {
            std::cout << "front :: " << head->data << "\n\n";
        }
    }

    void display()
    {
        Node* current = head;
        while(current!=nullptr)
        {
            std::cout << "|\t" << current->data << "\t";
            current = current->next;
        }
        std::cout << "|\n\n";
    }
};


int main()
{
    Queue que;

    que.enqueue(5);
    que.enqueue(6);
    que.enqueue(7);

    que.display();

    que.dequeue();
    que.getfront();
    que.getrear();

    que.display();
    que.dequeue();
    que.display();
    return 0;
}
