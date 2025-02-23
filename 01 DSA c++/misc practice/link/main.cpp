#include <iostream>
//linked list
// head->next->data->next->data->next
// node
// node = data and pointer(next)
struct Node
{
    int data;
    Node* next{nullptr};
};

class Linkedlist
{
    Node* head;
    int length{0};
    //Node* tail;
    //doubly linked list
    //singly linked list
public:
    Linkedlist()
     :head{nullptr}
     {
     }

    void create_linked_list()
    {
        Node* node1 = new Node{1};
        Node* node2 = new Node{2};
        Node* node3 = new Node{3};

        head = node1;

        head->next = node2;
        node2->next = node3;
        //node3->next is nullptr by default, as we have set the default value of next and head nullptr
        length = length+3;
    }

    bool isempty()
    {
        return head==nullptr;
    }

    void insert_at_beginning(int value)
    {
        Node* new_node = new Node{value};
        new_node->next = head;
        head = new_node;
        //works for either the list is empty or not
        ++length;
    }

    void insert_at_the_end(int value)
    {
        Node* new_node = new Node{value};
        ++length;

        if(isempty())
        {
            head = new_node;
            return;
        }

        Node* current = head;
        //to traverse we need temp or container variable
        while(current->next!=nullptr)
        {//we cannot use current!= nullptr, they are not the same,
            //to reach to the end use current->next!=nullptr condition.
            current = current->next;
        }

        //now we are at the last node

        current->next = new_node;
        //the last node points to a new node now
    }

    //insert at a given position
    void insert_at(int position, int value)
    {
        // we are supposing the position starts from 1st, 2nd, 3rd, and so on,
        //but, out indexing works from 0, 1, 2, 3...
        //thus, we will keep position as position - 1, up to which we have to traverse first, then, we insert after
        if(position<0||position>length+1)
        {
            std::cout << "Invalid position to insert value at!\n\n";
            return;
        }

        if(position==length+1)
        {
            insert_at_the_end(value);
            //length+1 is the new node after the last node;
        }

        if(position==1)
        {
            insert_at_beginning(value);
            //if the insert position is the first position, we insert at the beginning;
        }

        int i{1};
        Node* current = head;

        Node* new_node = new Node{value};
        ++length;

        while(i<position-1)
        {
            current = current->next;
            ++i;
            //if we want to insert at position 3, we will have to traverse up to position 1, 2, 3rd position to insert
            //, so, the iteration is only 1, 2, that is if position is 3, the iteration is 1, 2, < 3 true up to.
        }

        new_node->next = current->next;
        //new_node points to the the same node that the current position node points

        current->next = new_node;
        //the current node will now point to the new_node, that already connects with the next node
    }

    void display()
    {
        Node* current = head;

        while(current!=nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr\n\n";
    }

    void length_of_linkedlist()
    {
        std::cout << "Length of Linked list is :: " << length << "\n\n";
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

    obj.insert_at_the_end(9);
    obj.insert_at_the_end(10);

    obj.display();
    obj.length_of_linkedlist();

    obj.insert_at(3, 3);
    obj.display();
    obj.length_of_linkedlist();

    obj.insert_at(6,33);
    obj.display();

    return 0;
}
