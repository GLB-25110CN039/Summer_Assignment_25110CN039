#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string to find longest word in it: ");
    fgets(str, sizeof(str), stdin);
    int letter, longest = 0;
    // for loop will check number of words and number of letters in a single word
    for (int i = 0; i<=strlen(str); i++)
    {
        for (letter = 0; str[i] != '\0' && str[i] != ' '; i++)
        {
            letter++;
        }
        if (letter > longest)
        {
            longest = letter;
        }
    }
    printf(" length of Longest word in the string is : %d", longest);
    return 0;
}