#include <stdio.h>
int main () {
   int arr[7] = {10, 20, 30, 20, 40, 10, 50};
   int i, j, n = 7, temp;
   for (i = 0; i < n - 1; i++) {
      for (j = 0; j < n - 1 - i; j++)
      if (arr[j] > arr[j + 1]) {
         temp = arr[j];
         arr[j] = arr[j + 1];
         arr[j + 1] = temp;
      }
   }
   printf("Original array: ");
   for (int i = 0; i < 7; i++) {
      printf("%d ", arr[i]);
   }
    printf("\n");
    int arr2[7];
    int x = 0;
    arr2[0] = arr[0];
    for (i = 1; i < 7; i++) {
        if (arr2[x] != arr[i]) {
            x++;
            arr2[x] = arr[i];
        }
    }
    printf("New array is: ");
    for (i = 0; i <= x; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}

   
