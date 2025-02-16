#include <iostream>
//insert at the given position
/*
Move one position ahead of the desired position and link the node to the list.

To insert a node at a given position, we need to move to the node one position ahead of the desired position.

This is because we have to assign the next pointer of this node to our new node to connect the linked list.

So, we'll start at the head node.
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
        //new_node also points to the data that current->next points to
        current->next = new_node;
        //address of the new_node;
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
    my_list.append(8);
    my_list.append(3);
    my_list.append(9);
    my_list.append(7);
    my_list.append(6);

    std::cout << "\nCurrent Linked List\n";
    my_list.display();


    my_list.insert_node_at_position(11, 3);
    std::cout << "\nLinked List after inserting 11 at position 3\n";

    my_list.display();

    return 0;
}

/*
Complexity Analysis
Time Complexity
Inserting a node at a particular position in a linked list involves traversing to that position, thus resulting in a linear time complexity.

Time Complexity: O(n), where n is the number of nodes in the list

Space Complexity
For inserting a node at any position in a linked list the space (memory) requirement always remains the same regardless of the number of elements in the list, resulting in constant space complexity.

Space complexity: O(1)
*/
