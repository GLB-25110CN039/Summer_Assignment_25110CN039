#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    //frequency array of size 256 as ASCII values are upto 255
    char count1[256]={0}, count2[256]={0}; // store character's frequency and of same size
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i] != '\0'; i++)//count the frequency of each character of first string
    {
        count1[str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++)//count the frequency of each character of second string
    {
        count2[str2[i]]++;
    }
    printf("Common characters in both strings are: ");
    for (int i = 0; i < 256; i++)//finding common characters in both strings
    {
        if (count1[i] != 0 && count2[i] != 0)
        {
            printf("%c ", i);
        }
    }
    return 0;
}
