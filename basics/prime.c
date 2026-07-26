#include<stdio.h>
int main () {
    int n;
    int flag=0;
printf("Enter a Number: ");
scanf("%d",&n);
 if(n <= 1) {
        printf("%d is NOT a Prime Number", n);
        return 0;
 }
for(int i=2;i<n;i++){
if(n % i == 0){
flag=1;
break;
}}
 if(flag == 0)
        printf("%d is a Prime Number", n);
    else
        printf("%d is NOT a Prime Number", n);

    return 0;
 }