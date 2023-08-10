#include <stdio.h>

void main()
{
    int i, first, last, mid, search, n, a[100];
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the size of the  array\n", n);
    for (i = 0; i <= n; ++i)
    {
        scanf("%d", a[i]);
    }
    first = 0;
    last = n - 1;
    printf("Enter the search element\n");
    scanf("%d", &search);
    while (first <= last)
    {
        mid - (first + last) / 2;
        if (a[mid] == search)
        {
            printf("element are found %d postion \n", (mid + 1));
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
        if (first > last)
        {
            printf("element is not present in array \n");
        }
    }
}