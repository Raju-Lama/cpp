#include <iostream>

//2. WAP to calculate set union and intersection

int main()
{
    int arr1[5];

    std::cout << "Enter value of first set: ";

    for(int i = 0; i < 5; ++i)
    {
        std::cin >> arr1[i];
    }

    std::cout << "Enter value of second set: ";

    int arr2[5];

    for(int i = 0; i < 5; ++i)
    {
        std::cin >> arr2[i];
    }
    //std::cout << arr1 && arr2;
    int intersection[10];
    int uni[10];
    int count_inter{0};
    int count_union{0};

    for(int i = 0; i < 5; ++i)
    {
        for(int j=0; j < 5; ++j)
        {
            if (arr1[i] == arr2[j])
            {
                intersection[count_inter] = arr1[i];
                uni[count_union] = arr1[i];
                ++count_inter;
                ++count_union;
                continue;
            }
            /*

            uni[count_union] = arr1[i];
            ++count_union;
            */

            /*
            uni[i+1]=arr1[i];


            if(arr2[i] ==arr1[j])
            {
                continue;
            }
            else
            {
                uni[i+1]= arr2[i];
            }

            */
        }
    }
    /*

    for(int i = 0; i < 5; ++i)
    {
        for(int j =0; j < 5; ++j)
        {
            if(arr2[i] == arr1[j])
            {
                continue;
            }

            uni[count_union] = arr2[i];
            ++count_union;
        }
    }
    */

    int uni_len{0};

    for(int i: uni)
    {
        ++uni_len;
    }

    int inter_len{0};
    for(int i: intersection)
    {
        ++inter_len;
    }
    //std::cout << len1 << len2;

    std::cout << "Set union : \n";
    for(int i = 0; i < uni_len; ++i)
    {
        std::cout << uni[i] << " ";
    }

    std::cout << '\n';

    std::cout << "Set intersection : \n";
    for(int i = 0; i < inter_len; ++i)
    {
        std::cout << intersection[i] << " ";
    }
    return 0;
}
