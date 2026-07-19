#include<stdio.h>
int main(){
    int seconds,remaining_seconds,hours,minutes;
    printf("TIME CONVERTER\n");
    printf("THIS PROGRAM CONVERTS SECONDS TO HOURS\n");
    getchar();
    printf("Enter number of seconds to be converted: ");
    scanf("%d", &seconds);
    hours=seconds/3600;
    remaining_seconds=seconds%3600;
    minutes=remaining_seconds/60;
    remaining_seconds=remaining_seconds%60;
    printf("%d:%d:%d",hours,minutes,remaining_seconds);
    return 0;

}