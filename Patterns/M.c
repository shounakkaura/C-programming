#include <stdio.h>
int main()
{
    int n, nst, nsp, i, j, k;
    printf("Enter Number of lines: ");
    scanf("%d", &n);
    nst = n;
    nsp = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nsp += 2;
        nst--;
        printf("\n");
    }
    return 0;
}