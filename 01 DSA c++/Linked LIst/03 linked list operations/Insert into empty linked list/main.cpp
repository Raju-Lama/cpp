#include <iostream>
/*
Operations in Linked List
In this lesson, we will learn about the following operations in a linked list:

- Inserting into a linked list
- Deleting from a linked list
*/

/*
Insert Into a Linked List
We can insert a node at any position in a linked list. In general, there are two main cases for node insertion.

1. Insert to an empty linked list.

2. Insert to a non-empty linked list.

Let's start with inserting an element to an empty linked list.
*/

/*
Complexity Analysis
For an empty linked list, appending an element takes constant time as there are no existing nodes to visit and the memory requirements are also constant. Hence,

Time Complexity: O(1)

Space Complexity: O(1)

Now, let's learn how to insert a node in a non-empty linked list.
*/

template <typename T>
struct Node {
    T data;
    Node<T>* next = nullptr;
};

// Template class for handling a linked list
template <typename T>
class LinkedList {
  public:
    Node<T>* head;

    LinkedList() : head(nullptr) {}

    // Destructor deallocates all nodes
    ~LinkedList() {
        Node<T>* current = head;
        while (current) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    // Insert a new node in an empty list
    void append_into_empty(T data){
        Node<T>* new_node = new Node<T>({data});
        // For an empty list set new node as the head node.
        head = new_node;
    }

    // Displays the data in the list
    void display() {
        Node<T>* current = head;
        // Traverse the list and print each node's data
        while (current != nullptr) {
            std::cout << current->data << "->";
            current = current->next;
        }
        std::cout << "nullptr\n";
    }
};

int main() {
    LinkedList<int> my_list;

    std::cout << "\nInitial list:\n";
    my_list.display();

    my_list.append_into_empty(10);
    std::cout << "\nAfter appending the node 10 in the empty list\n";
    my_list.display();
}
