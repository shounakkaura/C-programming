#include <stdio.h>
int main () {
    //To reverse an array of integers
    int arr[5] = {20,45,13,67,39}; 
    int i,n=5;
    for (i=0; i<n/2;i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for (i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}   