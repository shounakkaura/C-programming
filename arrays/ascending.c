#include <stdio.h>
int main(){
    int n=5,i,j,temp;
    int arr[5]={20,45,13,67,39};
    printf("Orignal Array is: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
    for(i = 0; i<n-1;i++); {
        for(j=0;n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;  
            }
        }

    }

    printf("\nNew Array is: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
    return 0;
}