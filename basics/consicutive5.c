#include <stdio.h>
int main (){
    // Check if a number has three consecutive 5s. If yes, print YES, else print NO.
    //  Example: Number: 1353554 Result: NO Number: 345559 Result: YES. 
    int num,count=0;
    printf("THIS PROGRAM CHECKS IF NUMBER HAVE CONSICUTIVE 5s");
    getchar();
    printf("ENTER A NUMBER TO CHECKED: ");
    scanf("%d",&num);
    while(num>0)
    {
        if (num % 10 ==5) 
    {
    count++;
    
    if (count==3)
    {printf ("YES");
    return 0;
    }
}
    else {count=0;}
    num = num/10;
   }
   printf("NO");
   return 0;
}