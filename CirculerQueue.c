#include <stdio.h>

#define MAX 100 // Define the maximum size of the queue

int queue[MAX];
int FRONT = -1;
int REAR = -1;

void delete_Queue()
{
    if (FRONT == -1)
    {
        printf("Queue underflow\n");
        return;
    }
    int y = queue[FRONT]; // Declare and initialize 'y' here
    if (FRONT == REAR)
    {
        FRONT = -1;
        REAR = -1;
    }
    else if (FRONT == MAX - 1)
    {
        FRONT = 0;
    }
    else
    {
        FRONT = FRONT + 1;
    }
   
    printf("Deleted Element is %d\n", y);
}

int main()
{
    // Initialize the queue
    FRONT = REAR = -1;

    // Perform queue operations here
    // For example: enqueue, dequeue, etc.

    return 0;
}
