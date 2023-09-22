#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int dqueue_arr[MAX];
int front = -1;
int rear = -1;

int isFull();
int isEmpty();
void display();
void insert_frontEnd(int item);
void insert_rearEnd(int item);
int delete_frontEnd();
int delete_rearEnd();

int main()
{
    int choice, item;
    while (1)
    {
        printf("1. Insert at the front end\n");
        printf("2. Insert at the rear end\n");
        printf("3. Delete at the front end\n");
        printf("4. Delete at the rear end\n");
        printf("5. Display\n");
        printf("6. Quit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Input the element for adding in queue: ");
            scanf("%d", &item);
            insert_frontEnd(item);
            break;
        case 2:
            printf("Input the element for adding in queue: ");
            scanf("%d", &item);
            insert_rearEnd(item);
            break;
        case 3:
            if (!isEmpty())
                printf("Element deleted is: %d\n", delete_frontEnd());
            else
                printf("Queue is empty\n");
            break;
        case 4:
            if (!isEmpty())
                printf("Element deleted is: %d\n", delete_rearEnd());
            else
                printf("Queue is empty\n");
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);

        default:
            printf("Wrong choice\n");
            break;
        }

        printf("Front = %d, Rear = %d\n", front, rear);
    }
}

int isFull()
{
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

int isEmpty()
{
    return (front == -1);
}

void insert_frontEnd(int item)
{
    if (isFull())
    {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (front == 0)
    {
        front = MAX - 1;
    }
    else
    {
        front = front - 1;
    }
    dqueue_arr[front] = item;
}

void insert_rearEnd(int item)
{
    if (isFull())
    {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    dqueue_arr[rear] = item;
}

int delete_frontEnd()
{
    int item;
    if (isEmpty())
    {
        printf("Queue underflow\n");
        return -1;
    }
    item = dqueue_arr[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == MAX - 1)
            front = 0;
        else
            front = front + 1;
    }
    return item;
}

int delete_rearEnd()
{
    int item;
    if (isEmpty())
    {
        printf("Queue underflow\n");
        return -1;
    }
    item = dqueue_arr[rear];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        rear = MAX - 1;
    }
    else
    {
        rear = rear - 1;
    }
    return item;
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    i = front;
    if (front <= rear)
    {
        while (i <= rear)
            printf("%d ", dqueue_arr[i++]);
    }
    else
    {
        while (i <= MAX - 1)
            printf("%d ", dqueue_arr[i++]);
        i = 0;
        while (i <= rear)
            printf("%d ", dqueue_arr[i++]);
    }
    printf("\n");
}




// 1. Insert at the front end
// 2. Insert at the rear end
// 3. Delete at the front end
// 4. Delete at the rear end
// 5. Display
// 6. Quit
// Enter the choice: 1
// Input the element for adding in queue: 10
// Front = 0, Rear = 0

// 1. Insert at the front end
// 2. Insert at the rear end
// 3. Delete at the front end
// 4. Delete at the rear end
// 5. Display
// 6. Quit
// Enter the choice: 2
// Input the element for adding in queue: 20
// Front = 0, Rear = 1

// 1. Insert at the front end
// 2. Insert at the rear end
// 3. Delete at the front end
// 4. Delete at the rear end
// 5. Display
// 6. Quit
// Enter the choice: 5
// Queue elements: 10 20 

// 1. Insert at the front end
// 2. Insert at the rear end
// 3. Delete at the front end
// 4. Delete at the rear end
// 5. Display
// 6. Quit
// Enter the choice: 3
// Element deleted is: 10
// Front = 1, Rear = 1

// 1. Insert at the front end
// 2. Insert at the rear end
// 3. Delete at the front end
// 4. Delete at the rear end
// 5. Display
// 6. Quit
// Enter the choice: 4
// Element deleted is: 20
// Front = -1, Rear = -1
// Queue is empty

// 1. Insert at the front end
// 2. Insert at the rear end
// 3. Delete at the front end
// 4. Delete at the rear end
// 5. Display
// 6. Quit
// Enter the choice: 6
