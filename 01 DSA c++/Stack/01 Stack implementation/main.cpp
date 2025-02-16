#include <iostream>

using namespace std;

template <typename T>
struct Node {
    T data;
    Node<T>* next = nullptr;
};

template <typename T>
class LinkedList {
  public:
    LinkedList() = default;

    ~LinkedList() {
        Node<T>* current = head;
        while (current) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        count = 0;
    }

    // Deletes the first node of the list
    void delete_first_node() {
        Node<T>* node_to_delete = head;
        head = head->next;
        delete node_to_delete;
        --count;
    }

     // Returns the first element of the linked list
     T get_first_element() {
        return head->data;
     }

    // Inserts a node at the beginning of the list
    void insert_node_at_beginning(T data) {
        Node<T>* new_node = new Node<T>({data});
        new_node->next = head;
        // Head now points to the new node
        head = new_node;
        ++count;
    }

      // Returns the count of nodes in the linked list
      int count_elements() {
        return count;
     }

    // Displays the data in the list
    void display() {
        Node<T>* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";  // End the line
    }

  private:
    Node<T>* head {nullptr};
    int count {0};
};

template<typename T>
class Stack {
public:
    Stack() = default;
    ~Stack() = default;

    // Check if the stack is empty
    bool is_empty() {
        return (linked_list.count_elements() == 0);
    }

    // Push an element onto the stack
    void push(T item) {
        linked_list.insert_node_at_beginning(item);
    }

    // Pop an element from the stack
    void pop() {
        if (!is_empty())
            linked_list.delete_first_node();
    }

    // Get the top element of the stack
    T peek() {
        return linked_list.get_first_element();
    }

    // Display all elements in the stack
    void print_stack() {
        linked_list.display();
    }

private:
    LinkedList<T> linked_list;
};

int main() {
    Stack<int> stack1;

    stack1.push(5);
    stack1.push(100);
    stack1.push(1000);

    cout << "Stack after push operations: ";
    stack1.print_stack();

    cout << "Peek the stack: " << stack1.peek() << '\n';

    cout << "Stack after peek operation: ";
    stack1.print_stack();

    stack1.pop();

    cout << "Stack after pop operation: ";
    stack1.print_stack();

    return 0;
}
