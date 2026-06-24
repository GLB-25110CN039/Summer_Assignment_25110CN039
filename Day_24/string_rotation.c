#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter first string: ");
    gets(str1); // input first string
    printf("Enter second string: ");
    gets(str2); // input second string
    if (strlen(str1) != strlen(str2))
    {
        printf("Strings are not rotation of each other!!\n");
    }
    else
    {
        char temp[200];              // new string to concatenate string 1,(temp=str1+str1)
        strcpy(temp, str1);          // first copy the string1 in temp
        strcat(temp, str1);          // then add or concatenate it in temp
        if (strstr(temp, str2) != 0) // check if string2 is substring of temp or not
        {
            printf("Both strings are rotations of each other!!");
        }
        else
        {
            printf("Strings are not rotation of each other!!");
        }
    }
    return 0;
}