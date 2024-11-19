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

    return 0;
}
