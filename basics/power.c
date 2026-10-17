#include <stdio.h>
int main()
{
    int power, base, product = 1;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Power: ");
    scanf("%d", &power);
    for (int i = 1; i <= power; i++)
    {
        product = product * base;
    }
    printf("answer is %d", product);
    return 0;
}