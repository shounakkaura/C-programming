#include <stdio.h>
int main(){
   int arr[10];
   int i, j,odd=0,even=0,neg=0;
   printf("This Program Tells The Number of Odd Even and Negative Numbers\n\n");
   printf("Enter 10 Numbers\n");
   for(i=0;i<10;i++){
    printf("Enter Number %d: ",i+1);
    scanf("%d",&arr[i]);
   }
   printf("Arrays is: ");
   for(i=0;i<10;i++){
      printf("%d, ",arr[i]);
      if(arr[i] % 2 == 0) {
      even++;}
      if(arr[i] % 2 != 0){
         odd++;
      }  
      if(arr[i] < 0){
         neg++;
      }
     }
     printf("\nNumber of Even Numbers: %d\n",even);
      printf("Number of Odd Numbers: %d\n",odd);
       printf("Number of Negative Numbers: %d\n",neg);
return 0;
   
}