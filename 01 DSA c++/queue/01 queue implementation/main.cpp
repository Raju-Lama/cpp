#include <iostream>
// adding element to the queue is enqueue() to the rear
// removing from the queue is dequeue() first element

using namespace std;

// Template structure for a Node in a linked list
template <typename T>
struct Node {
    T data;                   // Data value of the node
    Node<T>* next = nullptr;  // Pointer to the next node in the list
};

// Template class for handling a linked list
template <typename T>
class LinkedList {
  public:
    // Constructor initializes the linked list as empty
    LinkedList() = default;

    // Destructor deallocates all nodes to prevent memory leaks
    ~LinkedList() {
        Node<T>* current = head;
        while (current) {
            Node<T>* next = current->next;  // Save next node
            delete current;                 // Delete the current node
            current = next;                 // Move to next node
        }
        // Ensure the head is nullptr after destruction
        head = nullptr;
        count = 0;
    }

    // Deletes the first node of the list
    void delete_first_node() {
        Node<T>* node_to_delete = head;
        // Head is moved to the second node
        head = head->next;
        // Delete the former head node
        delete node_to_delete;
        // Decrement the count of nodes
        --count;
    }

     // Returns the first element of the linked list
     T get_first_element() {
        return head->data;
     }

    // Add a node to the end of the list
    void insert_node_at_end(T data) {
        Node<T>* new_node = new Node<T>({data});  // Create a new node

        // If list is empty,
        // new node is the head
        if (head == nullptr) {
            head = new_node;
            tail = new_node;
            ++count;
            return;
        }

        // Link the last node to the new node
        tail->next = new_node;

        // Update the tail node with the new node
        tail = tail->next;

        // Increment the count of nodes
        ++count;
    }


      // Returns the count of nodes in the linked list
      int count_elements() {
        return count;
     }

    // Displays the data in the list
    void display() {
        Node<T>* current = head;
        // Traverse the list and print each node's data
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";  // End the line
    }

  private:
    Node<T>* head {nullptr}; // Pointer to the head node
    Node<T>* tail {nullptr}; // Pointer to the tail node
    int count {0}; // Count of the number of nodes
};

template< typename T>
class Queue {
  public:
    Queue() = default; // Defaulted constructor
    ~Queue() = default; // Defaulted destructor

    // Check if the queue is empty
    bool is_empty() {
        return (linked_list.count_elements() == 0);
    }

    // Enqueue an element to the queue
    void enqueue(T item) {
        linked_list.insert_node_at_end(item);
    }

    // Dequeue an element from the queue
    void dequeue() {
        if(!is_empty())
            linked_list.delete_first_node();
    }

    // Get the first element of the queue
    T peek() {
        return linked_list.get_first_element();
    }

    // Display all elements in the queue
    void print_queue() {
        linked_list.display();
    }
  private:
    LinkedList<T> linked_list; // Underlying linked list to store queue elements
};

int main() {
    Queue <int> queue1;

    // Enqueue elements to queue
    queue1.enqueue(5);
    queue1.enqueue(10);
    queue1.enqueue(100);

    // Display all the elements in the queue
    cout << "Queue after adding three elements: ";
    queue1.print_queue();

    // Dequeue one element from the queue
    queue1.dequeue();

    // Display all the elements in the queue
    cout << "Queue after removing one element: ";
    queue1.print_queue();

    // Peek the first element of the queue
    cout << "Peek the queue: " << queue1.peek() << '\n';

// Display all the elements in the queue
    cout << "Queue after peek operation: ";
    queue1.print_queue();

    return 0;
}
