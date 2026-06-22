#include <stdio.h>
int main()
{
    char str1[50], str2[50];
    int j = 0;
    printf("Enter a string: ");
    gets(str1);
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != ' ')
        {
            str2[j++] = str1[i];
        }
    }
    str2[j] = '\0';
    printf("String without spaces: %s", str2);
    return 0;
}