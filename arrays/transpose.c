#include<stdio.h>
int main (){
    int i,j;
   int arr[2][2]={{1,2},{3,4}};
   printf("matrix A: \n");
   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
   int arr2[2][2];
   printf("Transpose Matrix is: \n");
   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        arr2[i][j]=arr[j][i];
        printf("%d ",arr2[i][j]);
    }
    printf("\n");

   }
return 0;
}