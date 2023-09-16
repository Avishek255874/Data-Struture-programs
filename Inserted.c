#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int queue_[MAX];
int rear = -1;
int front = -1;

void insert(int item);
int del();
int peek();
void display();
int isFull();
int isEmpty();

int main()
{
    int choice, item;
    while (1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display element at the front\n");
        printf("4.Display all elements of the queue\n");
        printf("5.Quit \n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("input the element for adding in queue: ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            item = del();
            printf("Deleted element is: %d\n", item);
            break;
        case 3:
            printf("Element at the front is: %d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Wrong choice. Please try again!\n");
            break;
        }
    }
    return 0;
}

void insert(int item)
{
    if (isFull())
    {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear = rear + 1;
    queue_[rear] = item;
}

int del()
{
    int item;
    if (isEmpty())
    {
        printf("Queue underflow\n");
        exit(1);
    }
    item = queue_[front];
    front = front + 1;
    return item;
}

int peek()
{
    if (isEmpty())
    {
        printf("Queue underflow\n");
        exit(1);
    }
    return queue_[front];
}

int isEmpty()
{
    if (front == -1 || rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (rear == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue is:\n\n");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue_[i]);
    }
    printf("\n");
}
