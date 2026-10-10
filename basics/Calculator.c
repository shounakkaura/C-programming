
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, result;
    int choice;

    do
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Calculator closed!\n");
            break;
        }

        if (choice < 1 || choice > 4)
        {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);

        switch (choice)
        {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (b == 0)
            {
                printf("Error: Division by zero!\n");
            }
            else
            {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            break;
        }
        printf("\nPress Enter to continue...");
        getchar(); // We use two getchar() calls because the first consumes the leftover Enter
        getchar(); // character from scanf(), while the second waits for the user to press Enter again.
        system("cls");

    } while (1);

    return 0;
}
