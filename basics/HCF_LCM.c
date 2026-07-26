#include <stdio.h>
int HCF(int, int);
int LCM(int, int);
int main()
{
    int n1, n2;
    printf("This Program  Prints HCF and LCM of number\n");
    printf("Enter two NUmbers: ");
    scanf("%d %d", &n1, &n2);
    printf("HCF of numbers is %d\n", HCF(n1, n2));
    printf("LCM of numbers is %d\n", LCM(n1, n2));

    return 0;
}
int HCF(int n1, int n2)
{
    while (n2 != 0)
    {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}
int LCM(int n1, int n2)
{
    return (n1 * n2) / HCF(n1, n2);
}