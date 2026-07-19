#include<stdio.h>
int main (){
    int days,months,years,remaining_days;
    printf("DAY COVERTER");
    printf("THIS PROGRAM COVERTS DAYS TO YEARS");
    getchar();
    printf("Please number of days: ");
    scanf("%d",&days);
    years=days/365;
    months=(days % 365)/30;
    remaining_days=(days%365)%30;
    printf("%d:%d:%d",years,months,remaining_days);
    return 0;
}