#include <stdio.h>
int factorial(int n)
{
    if (n < 0)
    {
        return 0;
    }
    int i, fact = 1;
    for (i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r)
{
    if (n < 0 || r < 0 || r > n)
    {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int i, j, k, n, r;
    printf("---Pascal triangle---\n");
    printf("Enter number of lines: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (k = 0; k <= i; k++)
        {
            printf("%d", combination(i, k));
        }
        printf("\n");
    }
    return 0;
}