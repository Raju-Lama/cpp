#include <iostream>
#include <vector>
//only pass by reference to avoid expensive copy

void passByRef(std::vector<int>& arr)
{
    std::cout << arr[3];
}
int main()
{
    std::vector<int> pass{1, 2, 3, 4, 5};
    passByRef(pass);
    return 0;
}
