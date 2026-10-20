#include <stdio.h>
int main()
{
    int a, i, j, k;
    printf("side of square: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (k = 1; k <= a + 1 - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= a; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}