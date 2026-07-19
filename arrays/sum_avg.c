#include<stdio.h>
int main () {
    int  arr[6]={45,88,90,102,34,12};
    int sum=0;
    float avg;
    for (int i=0;i<6;i++) {
        sum+=arr[i];
    }
    avg=(float)sum/6;
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", avg);
    return 0;
}