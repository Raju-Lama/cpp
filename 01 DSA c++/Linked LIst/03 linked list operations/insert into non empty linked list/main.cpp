#include <iostream>

/*
Insert Node to a Non-Empty Linked List
If we are inserting into a non-empty linked list, we have the following cases:

Insert at the end of a linked list.
Insert at the beginning of a linked list.
Insert at any given position.
Let's start by adding a node to the end of a linked list.
*/

/*
Complexity Analysis
For a non-empty linked list, appending requires traversing the entire list, resulting in linear time complexity.

Time Complexity: O(n), where n is the number of nodes in the list

However the memory requirements for appending a node is always constant. This results in constant space complexity.

Space complexity: O(1)

Next, we'll discuss how to insert a node at the beginning of the linked list.
*/


// Template structure for a Node in a linked list

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

    // Constructor initializes the linked list as empty
    LinkedList() : head(nullptr) {}

    // Destructor deallocates all nodes to prevent memory leaks
    ~LinkedList() {
        Node<T>* current = head;
        while (current) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
        // Ensure the head is nullptr after destruction
        head = nullptr;
    }

    // Add a node to the end of the list
    void append(T data) {
        Node<T>* new_node = new Node<T>({data});  // Create a new node

        // If list is empty,
        // new node is the head
        if (head == nullptr) {
            head = new_node;
            return;
            //why? otherwise, code fails to run
        }
        Node<T>* current = head;

        // Traverse to the end of the list
        while (current->next != nullptr) {
            current = current->next;
        }

        // Link the last node to the new node
        current->next = new_node;
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

    std::cout << "Initial list:\n";
    my_list.display();

    std::cout << "\nAppending 5 into the list (inserting into an empty list):\n";
    my_list.append(5);
    my_list.display();

    std::cout << "\nAppending elements 8, 3, 9, 7:\n";
    my_list.append(8);
    my_list.append(3);
    my_list.append(9);
    my_list.append(7);
    my_list.display();

}
