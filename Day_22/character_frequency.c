#include <stdio.h>
int count(char str[50], char ch); // function prototype
int main()
{
    char str[50],ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to count its frequency: ");
    scanf("%c", &ch);
    int freq = count(str, ch); // function calling
    printf("Frequency of the character %c is %d",ch,freq);
    return 0;
}
int count(char str[50], char ch) // function defintition
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    return count;
}
