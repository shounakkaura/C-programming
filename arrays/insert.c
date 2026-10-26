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
    printf("Enter element to be inserted: ");
    scanf("%d", &e);
    printf("Enter index at which element to be inserted: ");
    scanf("%d", &idx);

    for (i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = e;
    printf("New array is :{");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("}");
    return 0;
}