#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0')//traverse each character one by one
    {
        len++;
    }
    printf("The length of string is %d\n", len);
    // reverse string
    for (int i = 0; i < (len - 1) / 2; i++)
    {
        char temp = str[i]; // swap
        str[i] = str[len - 1 - i];
        str[len - i - 1] = temp;
    }
    printf("Reversed string is : %s", str);
    return 0;
}