#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int i;
    for (i = 0; str[i] != '\0' && str[i]!='\n'; i++); // semicolon terminates for loop
    printf("The length of string is %d", i);
    return 0;
}