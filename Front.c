#include <stdio.h>
#include<stdlib.h>
void delete Queue()
{
    int item;
    if (FRONT == -1)
    {
        printf("underflow");
    }
    item = Queue[FRONT];
    printf("delete element %d", &item);
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