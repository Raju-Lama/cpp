#include <iostream>
#include <array>
//aggregate initialization array struct

struct House
{
    int code;
    int id;
    int num;
};

int main()
{
    std::array <House, 3> arr{
      {
          {1, 2, 3},
          {2, 3, 4},
          {5, 6, 7},
      }
    };//aggregate initialization
    return 0;
}
