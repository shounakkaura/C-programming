#include <stdio.h>
int main()
{
    int a, i, j;
    printf("Enter length of star(odd num): ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (j == (a / 2) + 1 || i == (a / 2) + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}