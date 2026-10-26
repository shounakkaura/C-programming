#include <stdio.h>
int main()
{
    // To reverse an array of integers
    int arr[100];
    int i, n, v;
    printf("Enter length of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter value at index %d :", i);
        scanf("%d", &v);
        arr[i] = v;
    }

    for (i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("reversed array is :{");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("}");
    return 0;
}