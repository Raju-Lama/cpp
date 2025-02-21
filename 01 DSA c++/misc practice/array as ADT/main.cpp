#include <iostream>
//array as ADT
//have functions like
/*
    Display () – To Display the entire array on the screen.
    Add(n) / Append(n) – To add a particular element on the end of the array.
    Insert (index, n) – To add an element to a particular index.
    Delete (index) – To delete an element with the help of an index in the given array.
    Search (n) – To check whether the given element is present or not in an array.
    Get (index) – It will return the element which presents on the given index.
    Set (index, x) – It will change the element with the new element at a particular index.
    Max () / Min () – These will return the max and min element in the given array.
    Reverse () – It will reverse the order of elements in the given array.
    Shift () – It will shift the whole elements either on the left or right side by the given number.
*/

/*
we can create array in stack like arr[10]

we can create array in heap memory dynamically,
 by pointer class/struct.a = new int[size]
*/

/*
struct Array
{
    int* arr;
    int siz;
    //size of array
    int length;
    //length of current array

};*/

class ArrayADT
{
private:
    int capacity;
    //size of array
    int length;
    //current length of array
    int* arr;

public:
    ArrayADT(int size_of_array)
        :capacity{size_of_array},
         length{0},
         arr{new int[capacity]}
         {
         }

    ~ArrayADT()
    {
        delete[] arr;
    }

    bool isempty()
    {
        return length==0;
    }

    bool isfull()
    {
        return length==capacity;
    }

    void append(int value)
    {
        if(!isfull())
        {
            arr[length] = value;
            ++length;
        }
        else
        {
            std::cout << "Array is full!";
        }
    }

    void display()
    {
        if(isempty())
        {
            std::cout << "Array is empty!\n\n";
            return;
        }

        std::cout << "Array :: ";
        for(int i=0; i<length; ++i)
        {
            std::cout << "|  " << arr[i]  << "  ";
        }
        std::cout << "|\n\n";
    }

    void array_size()
    {
        std::cout << "Array Size :: " << capacity << "\n\n";
        //total size of array
    }

    void array_capacity()
    {
        std::cout << "Array Capacity :: " << capacity-length << "\n\n";
        //remaining size of array
    }

    void array_length()
    {
        std::cout << "Array Length :: " << length << "\n\n";
        //length of array which is occupied
    }

    void insert_at(int index, int value)
    {
        if(isfull())
        {
            std::cout << "Array is full!\n\n";
            return;
        }

        if(index<0 || index>=length)
        {
            std::cout << "Invalid Index!";
            return;
        }

        //only if the array is notfull, we put required element at the given index;
        for(int i=length-1; i>=index; --i)
        {
            //shifting to the right till the current length of array from the index given to empty the index position
           arr[i+1] = arr[i];
        }

        arr[index] = value;
        ++length;
    }

    void delete_at(int index)
    {
        if(isempty())
        {
            std::cout << "Array is empty!"'
        }

        if(index<0 || index>=length)
        {
            std::cout << "Invalid Index!\n\n";
            return;
        }


        for(int i=index; i<length; ++i)
        {
            arr[i] = arr[i+1];
        }

        --length;
        //decrementing length by 1;
    }

    void search_value(int value)
    {
        int flag{0};

        if(isempty())
        {
            std::cout << "Array is empty!\n\n";
            return;
        }

        for(int i=0; i<length; ++i)
        {

            if(value==arr[i])
            {
                std::cout << "The value is found at index :: " << i << "\n";
                flag = 1;
            }

            if(i==length-1 && flag==1)
            {
                std::cout << "\n";
                return;
                //there may be multiple same values;
            }
        }

        //if value is not found
        std::cout << "Value Not Found!\n\n";
    }

    void get_value_at(int index)
    {
        if(index<length)
            std::cout << "The value at index " << index << " is :: " << arr[index] << "\n\n";
        else
        {
            std::cout << "Invalid Index!\n\n";
        }
    }

    void set_value_at(int index, int value)
    {
        //set value at the index, no inserting, so the value at index will be changed
        if(index<length)
        {
            //we will only set value at index that is already occupied, not empty ones
            arr[index] = value;
        }
        else
        {
            std::cout << "Invalid Index!\n\n";
        }
    }

    void get_max()
    {
        if(!isempty())
        {
            int max_value = arr[0];

            for(int i=0; i<length; ++i)
            {
                if(max_value<arr[i])
                {
                    max_value = arr[i];
                }
            }

            std::cout << "Max value :: " << max_value << "\n\n";
        }
        else
        {
            std::cout << "Array is empty!\n\n";
        }
    }

    void get_min()
    {
        if(!isempty())
        {
            int min_value{arr[0]};

            for(int i=0; i<length; ++i)
            {
                if(min_value>arr[i])
                {
                    min_value = arr[i];
                }
            }

            std::cout << "Min value :: " << min_value << "\n\n";
        }
        else
        {
            std::cout << "Array is Empty!\n\n";
        }
    }

};

int main()
{
    ArrayADT ar{10};
    ar.array_capacity();
    ar.array_length();

    ar.display();

    ar.append(4);
    ar.append(7);
    ar.append(7);

    ar.display();
    ar.array_length();

    ar.array_capacity();
    ar.array_size();

    ar.insert_at(2, 7);
    //inserting value of 7 at 2nd index;
    //we have 6 at 2nd index, so it will shirt to the 3rd index
    ar.display();

    ar.append(7);
    ar.display();
    ar.array_length();
    ar.delete_at(3);
    ar.display();
    ar.array_length();

    ar.search_value(7);

    ar.get_value_at(3);

    ar.set_value_at(5, 3);

    ar.get_max();
    ar.get_min();

    return 0;
}
