#include <stdio.h>
int main()
{
    // To insert an element in an array of integers
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
    int arr2[100];
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    printf("\nnew array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}