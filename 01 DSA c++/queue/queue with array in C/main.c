#include <stdio.h>
#include <stdlib.h>
//queue implementation in array  using C
struct Queue
{
    int front;
    int rear;
    int size;
    int* Q; //ie array dynamic memory allocation we will be using
};

void create(struct Queue * q, int size)
{
    //first step is to create a basic queue structure
    q->Q = (int*) malloc(q->size * sizeof(int));
    //create array of the fixed size we need

    q->front=q->rear=-1;
    q->size = size;
}

void enqueue(struct Queue * q, int value)
{
    if(q->rear == q->size-1)
    {
        printf("Overflow!");
        return;
    }
    else
    {
        ++q->rear;
        q->Q[q->rear] = value;
    }
}



int main()
{

    return 0;
}
