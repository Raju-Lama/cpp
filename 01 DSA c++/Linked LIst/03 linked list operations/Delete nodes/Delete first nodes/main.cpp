#include <iostream>
/*
Delete From the Linked List
Now, we will address the deletion process.

We can delete a node at any position in a linked list. There are two cases for node deletion:

Delete the first node.
Delete the node at a given position.
*/

/*
Complexity Analysis
Time Complexity
Deleting the first node of the linked list requires constant time. It is because this task doesn't depend on the size of the linked list.

Time complexity: O(1)

Space Complexity
Deleting the first node of the linked list has constant memory requirements resulting in constant space complexity.

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
            cout << current->data << "->";
            current = current->next;
        }
        cout << "nullptr\n";
    }
};

int main() {
    LinkedList<int> my_list;

    my_list.insert_node(8, 1);
    my_list.insert_node(3, 2);
    my_list.insert_node(9, 3);
    my_list.insert_node(7,4);
    my_list.insert_node(6,5);

    cout << "\nCurrent List:\n";
    my_list.display();

    my_list.delete_first_node();
    cout << "\nAfter deleting the first node\n";
    my_list.display();


    return 0;
}
