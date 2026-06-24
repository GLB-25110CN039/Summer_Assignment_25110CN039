#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter a string to compress: ");
    gets(str);
    char current = str[0];
    int count = 1;
    for (int i = 1; i <= strlen(str); i++)
    {
        if (str[i] == current)
        {
            count++;
        }
        else
        {
            printf("%c%d", current, count);
            current = str[i];
            count = 1;
        }
    }
    return 0;
}