#include<iostream>

// Template structure for a Node in a linked list
template <typename T>
struct Node {
    T data;
    Node<T>* next = nullptr;
};

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

    // Inserts a node at the beginning of the list
    void insert_node_at_beginning(T data) {
        Node<T>* new_node = new Node<T>({data});
        new_node->next = head;
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
        Node<T>* new_node = new Node<T>({data});  // Create a new node
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
        // Insert at the given position if valid
        insert_node_at_position(data, position);
    }

    // Deletes the first node of the list
    void delete_first_node() {
        Node<T>* node_to_delete = head;
        // Head is moved to the second node
        head = head->next;
        // Delete the former head node
        delete node_to_delete;
    }

    // Delete a node at a specified position (1-based index)
    void delete_node(int position) {
        // if deleting the head node
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

    // Member function to remove duplicates from a sorted linked list
    void remove_duplicates(){
        // If the list is empty, there is nothing to do
        if (head == nullptr) return;

        // Start from the head of the list
        Node<T>* current = head;

        // Continue to traverse the list until you reach the end
        while(current->next != nullptr){
            // Check if the current node and the next node contain the same data
            if(current->data == current->next->data) {
                // If they do, prepare to delete the next node
                Node<T>* node_to_delete = current->next;

                // Bypass the node to be deleted by pointing to the next of next
                current->next = node_to_delete->next;

                // Delete the duplicate node
                delete node_to_delete;
            }
            else {
                // Move to the next node if there is no duplication
                current = current->next;
            }
        }
    }

};


int main(){
   LinkedList<int> my_list;

   my_list.insert_node(30);
   my_list.insert_node(55);
   my_list.insert_node(55);
   my_list.insert_node(80);
   my_list.insert_node(80);
   my_list.insert_node(80);

   std::cout << "\nCurrent Linked List:\n";
   my_list.display();

   my_list.remove_duplicates();
   std::cout << "\nAfter removing duplicates:\n";
   my_list.display();

}
