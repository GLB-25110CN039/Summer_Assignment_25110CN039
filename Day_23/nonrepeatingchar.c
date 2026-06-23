#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter a string to find its first non-repeating character: ");
    gets(str);
    int count = 0, found = 0;
    int i, j;
    char nonrepeatingchar;
    for (i = 0; i < strlen(str); i++)
    {
        count = 0;
        for (j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j])
                count++;
        }
        if (count == 1)
        {
            nonrepeatingchar = str[i];
            found = 1;
            break; // to stop execution of program when first  non-repeating character found
        }
    }
    if (found == 0)
    {
        printf("There is no non-repeating character in the string!!");
    }
    else
    {
        printf("First non-repeating character in the string is :  %c", nonrepeatingchar);
    }
    return 0;
}