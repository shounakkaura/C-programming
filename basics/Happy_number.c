
#include <stdbool.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to be checked: ");
    scanf("%d", &n);

    long sum = 0, rem = 0;

    if (n <= 0)
    {
        printf("It is not a happy number.");
        return 0;
    }

    while (n != 1 && n != 4)
    {
        sum = 0;

        while (n > 0)
        {
            rem = n % 10;
            sum += rem * rem;
            n /= 10;
        }

        n = sum;
    }

    if (n == 1)
        printf("It is a happy number.");
    else
        printf("It is not a happy number.");

    return 0;
}
