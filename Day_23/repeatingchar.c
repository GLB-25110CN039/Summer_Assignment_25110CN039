#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i, j, found = 0;
    char repeating_char;
    printf("Enter a string to find its repeating character: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                repeating_char = str[i];
                found = 1;
                break;
            }
        }
        if (found == 1)
            break;
    }
    if (found == 1)
    {
        printf("First repeating character in the string is : %c", repeating_char);
    }
    else
    {
        printf("There is no repeating character!!");
    }
    return 0;
}