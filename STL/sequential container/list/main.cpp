#include <iostream>
#include <list>
#include <string>

/*
The C++ std::list implements the doubly linked list data structure, in which each element consists of 3 components:

Prev - stores the address of the previous element (NULL or nullptr for the first element)
Next - stores the address of the next element (NULL or nullptr for the last element)
Data - stores the actual data
*/

int main() {

    // Create a list
    std::list<std::string> movies = {"Forrest Gump", "The Shawshank Redemption"};


    // Add an element to the back of the list
    movies.push_back("Titanic");

    // Add an element to the front of the list
    movies.push_front("Forest Gump");

    //access first element
    std::cout << movies.front() << '\n';

    //access last element
    std::cout << movies.back() << '\n';

     // Remove element at the front
    movies.pop_front();

    // Remove element at the back
    movies.pop_back();

    // Print the list elements
    for (std::string movie: movies) {
        std::cout <<movie << std::endl;
    }



    return 0;
}

//creates a doubly linked list, each element is a node to the list

/*
Add elements to a list
Access elements from a list
Modify elements of a list
Remove elements from a list
*/
