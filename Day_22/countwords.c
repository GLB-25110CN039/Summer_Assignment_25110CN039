#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int word = 1; // atleast one word entered by the user
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ') // each word starts after every space
        {
            word++;
        }
    }
    printf("Number of words in the string : %d", word);
    return 0;
}