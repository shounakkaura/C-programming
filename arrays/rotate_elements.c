#include<stdio.h>
int main () {
    int arr[3] = {123,231,312};
    int n=3,temp;
    printf("Array is: "); 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
    temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];

    }
    arr[0]=temp;
    printf("\n Array after Rotating is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
    return 0;
}