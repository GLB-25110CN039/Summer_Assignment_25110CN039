#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')//this condition only changes lowercase characters
        { //difference between ASCII value of uppercase and lowercase letters is 32(97-65=32)
            str[i] = str[i] - 32;
        }
    }
    printf("String in uppercase : %s", str);
    return 0;
}