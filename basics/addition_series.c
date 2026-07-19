

#include<stdio.h>
int main(){
    int sum=0,num,n,term=0;
    printf("SERIES ADDITION \n");
    printf("This program add a number in series of 1+11+111+1111....ntimes");
    getchar();
    printf("please enter a number to be calculated n times: ");
    scanf("%d",&num);
    printf("\nHow many times it should be added in series: "); 
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
   {
    term=term*10+num;
    sum+=term;
    if (i<n){
    printf("%d+",term);
   } 
   else printf("%d",term);
}
printf("\nSum of terms is: %d",sum);
return 0;
}