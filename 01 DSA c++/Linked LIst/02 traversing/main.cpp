#include<iostream>

// Template structure for a Node in a linked list
template <typename T>
struct Node{
    T data;
    Node<T>* next = nullptr;
};

// Template class for handling a linked list
template <typename T>
class LinkedList {
    Node<T>* head;

  public:
    // Constructor initializes the head to nullptr
     LinkedList()
        : head(nullptr)
    {
    }

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

     // Member function to create a linked list
     void create_linked_list(){
        Node<T>* node1 = new Node<T>{80};
        head = node1;

        Node<T>* node2 = new Node<T>{9};
        head->next = node2;

        Node<T>* node3 = new Node<T>{14};
        node2->next = node3;

        node3->next = nullptr;

     }

     // Member function to traverse and print
     // the data in the list
     void traverse_linked_list(){
        Node<T>* current = head;
        // Iterate until we reach the end node
        while (current != nullptr) {
          std::cout << current->data << " -> ";
          // Move to the next node
          current = current -> next;
        }
        std::cout << "nullptr";
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

    // Method to calculate the sum of
     // elements of the node
     int calculate_sum(){
        // Write your code here
        Node<T>* current = head;
        int sum{0};

        while(current!=nullptr)
        {
            sum += current->data;
            current = current->next;
        }
        return sum;
     }

};

int main()
{
   LinkedList<int> my_list;

   my_list.create_linked_list();

   my_list.traverse_linked_list();

   std::cout << "\n Total numbers of nodes:: " << my_list.count_elements();

   std::cout << "\n Sum of Total nodes:: " << my_list.calculate_sum() << '\n';
   return 0;
}
