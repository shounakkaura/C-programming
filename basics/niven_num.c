#include<stdio.h>
int main(){
    int n,sum=0,r,num;
    printf("ENTER NUMBER: ");
    scanf("%d",&n);
    num = n;
    while(n>0){
        r = n % 10;
        sum+=r;
        n=n/10;
    }
    if(num % sum == 0){
        printf("YES ITS A NIVEN NUMBER");
      }  else{
            printf("ITS NOT A NIVEN NUMBER");
        }
    
    return 0;
}