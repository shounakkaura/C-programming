#include <stdio.h>
int main()
{
    int i, j, k, a, b, n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        return 1;
    }
    for (i = 1; i < n * 2; i++)
    {
        for (j = 1; j < n * 2; j++)
        {
            int a = i, b = j;
            if (i > n)
                a = 2 * n - i;
            if (j > n)
                b = 2 * n - j;
            if (a < b)
                printf("%d", a);
            else
                printf("%d", b);
        }
        printf("\n");
    }
    return 0;
}