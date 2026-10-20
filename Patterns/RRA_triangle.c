#include <stdio.h>
int main()
{
    int i, j, k, r, c;
    printf("Enter length of triangle: ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r + 1 - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}