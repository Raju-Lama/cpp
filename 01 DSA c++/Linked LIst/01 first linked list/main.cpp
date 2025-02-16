#include <iostream>

//using class
template <typename T>
class Node
{
public:
    T data;
    Node<T>* next = nullptr;
    //we have a data and address in a linked list
    //data and next(address/pointer)

    //Node<T>* head;
};

int main()
{
    //Node<T>* node1 = new Node<int>({11});
    //Node<T>* node2 = new Node<int>({2});
    //Node<T>* node2 = new Node<int>({88});

    /*
        every node comes with data and address
        hence,

        Node* data; // pointer object
        data->next; //address
    */

    // Create node1
    Node<int>* node1 = new Node<int>{80};
    // Assign node 1 as head node
    Node<int>* head = node1;

    //creating 2nd node
    Node<int>* node2 {new Node<int>{50}};
    node2->next = nullptr;
    //address


    //pointing to node2 is storing address in the previous node
    head -> next = node2;
    //head is pointing to the next node now

    std::cout << "[Node1->data, Node1->next] -> [Node2->data, Node2->next] :: \n\n";
    std::cout << "[" << node1->data << ", " << node1->next << "] -> [" << node2->data <<
    ", " << node2->next << "]\n";

    return 0;
}

/*
Complexity Analysis
Time Complexity
Traversing a linked list requires visiting each element one by one, resulting in a linear time complexity proportional to the number of elements in the list.

Time Complexity: O(n), where n is the number of nodes in the list.

Space Complexity
For traversing a linked list the space (memory) requirement always remains the same regardless of the number of elements in the list, resulting in constant space complexity.

Space complexity: O(1)
*/
