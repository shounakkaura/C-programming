#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Palindrome Checker\n");
    printf("Enter a Word to be checked: ");
    scanf("%s", str);
    int flag = 1;
    int n = strlen(str);
    int middle = strlen(str) / 2;
    for (int i = 0; i < middle; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            flag = 0;
        }
    }
    if (flag == 1)
        printf("word is a Palindrome");
    if (flag == 0)
        printf("Word is not a Palindrome");
    return 0;
}
