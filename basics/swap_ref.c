#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    printf("a is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("Now a is %d and b is %d", a, b);
    return 0;
}