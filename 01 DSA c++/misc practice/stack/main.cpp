#include <iostream>
//stack implementation
//ie last in first out (LIFO)
struct Node
{
    int data;
    Node* next{nullptr};
};

class Stack
{
    Node* head;

public:

    Stack()
      : head{nullptr}
      {
      }

    bool isempty()
    {
        return head == nullptr;
    }

    void push(int value)
    {
        //stack push is inserting at the beginning
        Node* new_node = new Node{value};
        new_node->next = head;
        head = new_node;
    }

    void pop()
    {
        if(!isempty())
        {
            Node* top_node = head;
            head = head->next;
            delete top_node;
            std::cout << "Stack Pop() operation!\n";
        }
        else
        {
            std::cout << "Stack is Empty!";
        }
    }

    void top()
    {
        //peek the top of the stack, means head peek
        std::cout << "Top element:: " << head->data << std::endl;
    }

    void display()
    {
        Node* current = head;
        while(current!=nullptr)
        {
            std::cout << "||\t" << current->data << "\t||\n";
            current = current->next;
        }
        std::cout << "  --------------\n";
    }
};

int main()
{
    Stack stack1;
    stack1.push(4);
    stack1.push(5);
    stack1.push(6);

    stack1.display();

    stack1.top();
    stack1.pop();
    stack1.top();

    stack1.display();
    stack1.push(55);
    stack1.push(66);
    stack1.display();

    return 0;
}
