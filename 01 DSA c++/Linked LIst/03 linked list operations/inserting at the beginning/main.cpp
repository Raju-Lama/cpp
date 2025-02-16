#include <iostream>

//insert new node at the beginning

// Template structure for a Node in a linked list
template <typename T>
struct Node {
    T data;
    Node<T>* next = nullptr;
};

// Template class for handling a linked list
template <typename T>
class LinkedList {
    Node<T>* head;
  public:


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
          // Create a new node
        Node<T>* new_node = new Node<T>({data});

        // If list is empty,
        // new node is the head
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node<T>* current = head;

        // Traverse to the end of the list
        while (current->next != nullptr) {
            current = current->next;
        }

        // Link the last node to the new node
        current->next = new_node;
    }

    // Inserts a node at the beginning of the list
    void insert_node_at_beginning(T data) {
        // Create a new node
        Node<T>* new_node = new Node<T>({data});
        // New node points to the former head
        new_node->next = head;
        // Head now points to the new node
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
        std::cout << "nullptr\n";  // End the list with nullptr to indicate the end
    }
};

int main() {
   LinkedList<int> my_list;
   my_list.append(8);
   my_list.append(3);
   my_list.append(9);
   my_list.append(7);
   my_list.append(6);

   std::cout << "\nCurrent Linked List:\n";
   my_list.display();

   std::cout << "\nAfter Inserting 10 at the beginning\n";
   my_list.insert_node_at_beginning(10);

   my_list.display();

   return 0;
}
