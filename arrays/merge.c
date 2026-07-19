#include <stdio.h>
int main (){
    int arr1[3] = { 10,20,30};
    int arr2[3] = {40,50,60};
    int merged[6];
    printf("Array 1: ");
    for (int i=0;i<3;i++){
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i=0;i<3;i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++){
        merged[i] = arr1[i];
    }
    for(int i=0; i<3; i++){
        merged[i+3] = arr2[i];
    }
    printf("Merged array: ");
    for(int i=0; i<6; i++){
        printf("%d ", merged[i]);
    }
    return 0;
    

}