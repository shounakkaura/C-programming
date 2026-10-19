#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter numbers of column: ");
    scanf("%d", &c);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}