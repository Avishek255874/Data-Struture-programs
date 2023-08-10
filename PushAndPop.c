#include <stdio.h>
#include <stdlib.h>
#define max 20
int stack[max];
int top = -1;

void push()
{
    int item;
    if (top == (max - 1))
        printf("Stack overflow\n");
    else
    {
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("%d is deleted\n", stack[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("Enter your choice: 1 for push, 2 for pop, 3 for display, 4 for exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Incorrect option entered\n");
        }
    }
    return 0;
}
