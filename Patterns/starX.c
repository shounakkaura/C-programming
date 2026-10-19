#include <stdio.h>
int main()
{
    int a, i, j;
    printf("length of X (odd): ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (i == j || j == a + 1 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}