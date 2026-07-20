#include<stdio.h>
int main () {
    int num;
printf("BUZZ NUMBER CHECKER");
// Buzz number is a number that is divisible by 7 or ends with 7
printf("\nEnter a Number: ");
scanf("%d",&num);
if(num % 7 == 0){
    printf("%d is a buzz number",num);
}
else if (num % 10 == 7){
    printf("%d is a buzz number",num);
}
else printf("%d is NOT a buzz number",num);

    return 0;
}
