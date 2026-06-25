#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len = 0;//length of current word
    int maxlen = 0;//length of longest word
    int start = 0;//index of current word
    int maxstart = 0;//index of longest word
    printf("Enter a string to find longest word in it: ");
    fgets(str, sizeof(str), stdin);//input string
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n' && str[i] != ' ')//means current word is still there
        {
            len++;
        }
        else//current word has ended
        {
            if (len > maxlen)//it will check if current word is longest or not
            {
                maxlen = len;
                maxstart = start;
            }
            len = 0;//reset for next word
            start = i + 1;
        }
    }
    if (len > maxlen)//it will check for last word
    {
        maxlen = len;
        maxstart = start;
    }
    printf("Longest word in the string is : ");
    for (int i = maxstart; i < maxstart + maxlen; i++)
    {
        printf("%c", str[i]);
    }
    printf("\nLength =%d", maxlen);
    return 0;
}