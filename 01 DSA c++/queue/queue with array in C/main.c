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
        printf("Overflow!\n");
        return;
    }
    else
    {
        ++q->rear;
        q->Q[q->rear] = value;
    }
}

void dequeue(struct Queue * q)
{
    int x = -1;
    if(q->rear == q->front)
    {
        printf("Underflow!\n");
        return;
    }
    else
    {
        ++q->front;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct Queue * q)
{
    //traverse
    if(q->front==q->rear)
    {
        printf("Empty queue!\n");
        return;
    }

    for(int i=q->front+1; i<=q->rear; ++i)
    {
        printf("|%d\t|", q->Q[i]);
    }
    printf("\n");
}

void firstinline(struct Queue * q)
{
    //can implement here if the queue is empty or not
    printf("First in Line :: %d\n", q->Q[q->front + 1]);
    //because rear starts from a step ahead from front
    //or say, front is -1 at the start and we start from 0 index
}

void lastinline(struct Queue * q)
{
    //can create operation to check if the queue is empty or not
    printf("Last in line :: %d\n",  q->Q[q->rear]);
}

int main()
{
    struct Queue q;
    create(&q, 5);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    display(&q);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    display(&q);

    firstinline(&q);
    lastinline(&q);

    return 0;
}
