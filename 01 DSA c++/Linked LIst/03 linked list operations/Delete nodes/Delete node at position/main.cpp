#include <iostream>
//delete node at a position
/*
1. Traverse to the position just before the node to be deleted.
    position - 1

To delete a node, we move to the position just before the node to be deleted.

2. Link the nodes.

Link the next attribute of the current node to the node at position + 1.
    current->next = current->next->next
*/

/*
Complexity Analysis
Time Complexity
Deleting a node from a certain position in a linked list requires moving to that position, thus resulting in a linear time complexity.

Time Complexity: O(n), where n is the number of nodes in the list.

Space Complexity
For deleting a node at any position in a linked list the space (memory) requirement always remains the same regardless of the number of elements in the list, resulting in constant space complexity.

Space complexity: O(1)

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
    // Inserts a node at a specific position (1-based index)
    void insert_node_at_position(T data, int position) {
        // If inserting at the beginning,
        // call insert_at_begining
        if (position == 1) {
            insert_node_at_beginning(data);
            return;
        }
        // Create a new node
        Node<T>* new_node = new Node<T>({data});
        Node<T>* current = head;
        int i = 1;
        // Traverse to the position
        // before where the new node will be inserted
        while (i < position - 1) {
            current = current->next;
            ++i;
        }
        // Insert the new node in its correct position
        new_node->next = current->next;
        current->next = new_node;
    }

    // Universal insert method
    void insert_node(T data, int position = 0) {
        // Append by default if position is invalid
        if (!position || position < 0 || position > count_elements()) {
            append(data);
            return;
        }
        // If position is valid,
        // insert at specified position
        insert_node_at_position(data, position);
    }

    // Deletes the first node of the list
    void delete_first_node() {
        // Nothing to do if list is empty
        if (head == nullptr) return;
        Node<T>* node_to_delete = head;
        // Head is moved to the second node
        head = head->next;
        // Delete the former head node
        delete node_to_delete;
    }

    // Delete a node at a specified position (1-based index)
    void delete_node(int position) {
        // If deleting the head node
        // call delete_first_node
        if (position == 1) {
            delete_first_node();
            return;
        }
        // If position is invalid,
        // delete the last node
        if (!position || position < 0 || position > count_elements()) {

            Node<T>* current = head;
            while (current->next->next != nullptr) {
                current = current->next;
            }
            Node<T>* node_to_delete = current->next;
            current->next = nullptr;
            delete node_to_delete;
            return;
        }

        Node<T>* current = head;
        int i = 1;
        // If position is valid,
        // Traverse to the node before the one to be deleted
        while (i < position - 1) {
            current = current->next;
            ++i;
        }
        Node<T>* node_to_delete = current->next;
        current->next = node_to_delete->next;
        delete node_to_delete;
    }

    // Count the number of elements in the list
    int count_elements() {
        Node<T>* current = head;
        int count = 0;
        // Traverse the entire list and count the nodes
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
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

   // Insert nodes in the list
   my_list.insert_node(8, 1);
   my_list.insert_node(3, 2);
   my_list.insert_node(9, 3);
   my_list.insert_node(7,4);


   std::cout << "\nCurrent Linked List\n";
   my_list.display();

   std::cout << "\nAfter deleting the node at first position\n";
   my_list.delete_node(1);
   my_list.display();

   std::cout << "\nAfter deleting the node at third position\n";
   my_list.delete_node(3);
   my_list.display();

   std::cout << "\nAfter deleting node at position = 100 (Out of bounds)\n";
   my_list.delete_node(100);
   my_list.display();

   return 0;
}
