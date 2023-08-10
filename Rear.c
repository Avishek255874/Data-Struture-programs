#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int Queue[MAX_SIZE];
int FRONT = -1;
int REAR = -1;

void deleteQueue()
{
    int item;
    if (FRONT == -1)
    {
        printf("Underflow - Queue is empty\n");
        return;
    }

    item = Queue[FRONT];
    printf("Deleted element: %d\n", item);

    if (FRONT == REAR)
    {
        FRONT = -1;
        REAR = -1;
    }
    else
    {
        FRONT = FRONT + 1;
    }
}

int main()
{
    // Your code to enqueue elements into the Queue and call deleteQueue() as required.

    return 0;
}
