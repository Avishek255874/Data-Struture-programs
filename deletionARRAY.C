#include <stdio.h>

int main() {
    int arr[30], n, pos, item, i;

    printf("\nEnter the no of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nThe array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter the position where element is to be deleted from the array: ");
    scanf("%d", &pos);

    item = arr[pos - 1];

    printf("\nThe element deleted is %d\n", item);

    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    printf("After deletion, the array is:\n");
    for (i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    return 0;
}
