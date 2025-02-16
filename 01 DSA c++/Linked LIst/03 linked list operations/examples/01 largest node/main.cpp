#include<iostream>

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
        head = nullptr;
    }

    // Inserts a node at the beginning of the list
    void insert_node_at_beginning(T data) {
        Node<T>* new_node = new Node<T>({data});

        new_node->next = head;

        head = new_node;
    }

     // Inserts a node at a specific position (1-based index)
    void insert_node_at_position(T data, int position) {
        if (position == 1) {
            insert_node_at_beginning(data);
            return;
        }
        Node<T>* new_node = new Node<T>({data});
        Node<T>* current = head;
        int i = 1;

        while (i < position - 1) {
            current = current->next;
            ++i;
        }
        // Insert the new node in its correct position
        new_node->next = current->next;
        current->next = new_node;
    }


     // Add a node to the end of the list
    void append(T data) {
        Node<T>* new_node = new Node<T>({data});  // Create a new node

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

    // Universal insert method
    void insert_node(T data, int position = 0) {
        // Append by default if position is invalid
        if (!position || position < 0 || position > count_elements()) {
            append(data);
        }
        // If position is valid,
        // insert at specified position
        else {
            insert_node_at_position(data, position);
        }
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

    // Member function to find the largest element in a linked list
    int find_largest(){
        // Start from the head of the list
        Node<T>* current = head;
        // Initialize with the data of the first node
        int largest = current->data;
        // Iterate over each node in the list
        while(current != nullptr){
            // If current node's data is greater,
            // update largest
            if (current->data > largest){
                largest = current->data;
            }
            // Move to the next node in the list
            current = current->next;
        }
        // Return the largest element found in the list
        return largest;
    }
};


int main(){
   LinkedList<int> my_list;

   my_list.insert_node(85);
   my_list.insert_node(90);
   my_list.insert_node(78);
   my_list.insert_node(92);
   my_list.insert_node(88);

   std::cout << "\nCurrent Linked List:\n";
   my_list.display();

   std::cout << "\nLargest Value: " << my_list.find_largest() << '\n';

}
