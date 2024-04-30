#include <iostream>
//changing the size of an array during the run time, dynamic memory allocation
//reallocation is expensive, as it copies to another separate memory block
//resize() can be used to resize an array vector
#include <vector>

int main()
{
    std::vector<int> arr{1, 2, 3, 4, 5};//capacity of array is 5
    for(auto i : arr)
        std::cout << i << '\n';

    std::cout << "Array capacity :: " << arr.size();
    arr.resize(8);//reallocation
    std::cout << "\nNew array size :: " << arr.size();
    std::cout << "\nThe new members of array are :: \n";
    for(auto i : arr)
        std::cout << i << '\n';
    return 0;
}
