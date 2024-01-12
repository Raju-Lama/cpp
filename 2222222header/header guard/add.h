#ifndef ADD_H_INCLUDED//header guard
#define ADD_H_INCLUDED
int add(int x, int y);//this is a forward declaration.
//if we define this function again here as:
/*
    int add(int x, int y)
    {
        return x + y;
    }
*/
//this is never defined as this header guard checks if this is defined in another place.



#endif // ADD_H_INCLUDED

//its best practice to not include function defition as such in the header, but, only forward declaration.
