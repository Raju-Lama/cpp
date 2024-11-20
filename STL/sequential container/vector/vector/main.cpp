#include <iostream>
#include <vector>

//sequential container
//dynamic array

int main()
{
        // Create an integer vector
    std::vector<int> prime_numbers = {2, 3, 5};

    // Print initial vector
    std::cout << "Initial Vector: ";
    for (int i : prime_numbers) {
        std::cout << i << " ";
    }

    // Add elements to the vector
    prime_numbers.push_back(7);
    prime_numbers.push_back(11);

    // Print the final vector
    std::cout << "\nUpdated Vector: ";
    for (int i : prime_numbers) {
        std::cout << i << " ";
    }

    //access first element with front() method
    std::cout << std::endl << prime_numbers.front() << std::endl;

    //access the last element with back() method
    std::cout << prime_numbers.back() << std::endl;

    //access the element at certain location with its index with at() method

    std::cout << prime_numbers.at(3) << std::endl;

    //modify elements with at()

    prime_numbers.at(1) = 5;
    std::cout << prime_numbers.at(1) << '\n';

    //remove last element with pop_back
    prime_numbers.pop_back();

    return 0;
}
