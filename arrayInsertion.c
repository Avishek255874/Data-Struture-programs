#include <stdio.h>

void main() {
    int arr[30], n, i, pos, item;

    printf("\nEnter the no of elements in the array:");
    scanf("%d", &n);

    printf("\nEnter the elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nThe array is:");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter the element to be inserted in the array:");
    scanf("%d", &item);

    printf("\nEnter the position where element is to be inserted in the array:");
    scanf("%d", &pos);

    // Shifting elements to make space for the new item
    for (i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];

    arr[pos - 1] = item;
    n++; // Increment the size of the array

    printf("\nAfter insertion, the array is:");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

  
}
