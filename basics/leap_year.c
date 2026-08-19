#include <stdio.h>
int main()
{
    int y, flag = 0;
    printf("Enter year: ");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        flag = 1;
    }
    else if (y % 100 == 0)
    {
        flag = 0;
    }
    else if (y % 400 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    if (flag == 1)
    {
        printf("%d is a Leap Year", y);
    }
    if (flag == 0)
    {
        printf("%d is NOT a Leap Year", y);
    }

    return 0;
}