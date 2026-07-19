#include <stdio.h>
int main () {
    int arr[10] = {34,67,13,80,95, 21, 45, 90, 12,};
    printf("original array: ");
    for (int i=0; i<8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n At which index you want to insert the element: ");
    int index;
    scanf("%d", &index);
    printf("Enter the element you want to insert: ");
    int element;
    scanf("%d", &element);
    for (int i=9; i>index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = element;
    printf("Array after insertion: ");
    for (int i=0; i<9; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}