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
        // New node points to the former head
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
        Node<T>* new_node = new Node<T>({data});


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
            return;
        }
        // Insert at the position if position is valid
        insert_node_at_position(data, position);
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

    // Member function to check if the linked list is sorted in non-decreasing order
    bool is_sorted(){
        // An empty linked list is considered sorted
        if (head == nullptr) return true;

        // Start from the head of the list
        Node<T>* current = head;

        // Continue to traverse as long as there is a next node
        while(current->next != nullptr){
            // If the current node's data is greater than the next node's,
            // the list is not sorted
            if (current->data > current->next->data) return false;

            // Move to the next node in the list
            current = current->next;
        }
        // If no unsorted pairs found, the list is sorted
        return true;
    }

};

int main(){
   LinkedList<int> my_list;

   my_list.insert_node(3);
   my_list.insert_node(5);
   my_list.insert_node(2);
   my_list.insert_node(12);
   my_list.insert_node(16);

   std::cout << "\nCurrent Linked List:\n";
   my_list.display();

   std::cout << "Is sorted ?" << std::boolalpha << my_list.is_sorted();
    return 0;
}
