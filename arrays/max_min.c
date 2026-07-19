#include <stdio.h>
int main () {
  int arr[5]={20,45,13,67,39};
  int max=arr[0],min=arr[0];
  for (int i=1;i<5;i++)
  {
    if (arr[i]>max)
    max=arr[i];
    if (arr[i]<min)
    min=arr[i];
  }
printf("largest element in the array is: %d\n",max);
printf("smallest element in the array is: %d\n",min);
}