#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter height of triangle: ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        char a;
        for (j = 1; j <= i; j++)
        {
            a = (char)(j + 64);
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}
