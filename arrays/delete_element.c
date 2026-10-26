#include <stdio.h>
int main()
{
    // To delete an element in an array of integers
    int arr[100];
    int i, n, idx, e, v;
    printf("Enter length of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter value at index %d :", i);
        scanf("%d", &v);
        arr[i] = v;
    }

    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter index at which element to be Deleted: ");
    scanf("%d", &idx);

    for (i = idx; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("New array is :");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}