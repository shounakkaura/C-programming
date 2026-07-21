#include<stdio.h> 
int main (){
    // task: Replace all even elements by 0 and odd by 1 in 1-d array.
    int arr[10];
    int i,n,j;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++){
        printf("Enter Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Orignal Array: ");
     for(i=0;i<10;i++){
        printf("%d ",arr[i]);
     }
      printf("\n Array After Conversion: ");
     for(i=0;i<10;i++){
        if(arr[i] % 2 == 0){
            arr[i]=0;
        }
        else arr[i]=1;
        printf("%d ",arr[i]);
     }
return 0;
}