#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter a string to check for palindrome: ");
    gets(str);
    int len = strlen(str);
    int flag = 0;
    for (int i = 0; i< len; i++)
    {
        if (str[i] != str[len - i - 1])//check for first half and last half elements of string
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
    return 0;
}