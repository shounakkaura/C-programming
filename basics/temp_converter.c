#include <stdio.h>
int main()
{
    char type, a, b;
    printf("TEMPERATURE CONVERTER\n");
    printf("Enter a to convert Celsius into Fahrenheit\n");
    printf("Enter b to convert Fahrenheit into Celsius\n");
    scanf("%c", &type);
    printf("Enter Temperature: ");
    float temp;
    scanf("%f", &temp);
    if (type == 'a')
    {
        temp = (temp * 9 / 5) + 32;
        printf("%.2f", temp);
    }
    if (type == 'b')
    {
        temp = (temp - 32) * 5 / 9;
        printf("%.2f", temp);
    }
    return 0;
}