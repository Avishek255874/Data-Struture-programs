#include <stdio.h>
#include <conio.h>

void main()
{
    int i, first, last, mid, search, n, a[100];
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements in the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    first = 0;
    last = n - 1;
    printf("Enter the search element\n");
    scanf("%d", &search);
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (a[mid] == search)
        {
            printf("Element found at position %d\n", (mid + 1));
            break;
        }
        else if (a[mid] < search)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    if (first > last)
    { 
        printf("Element is not present in the array\n");
    }
}
