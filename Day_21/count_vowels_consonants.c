#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int vowel = 0, cons = 0;
    for (int i = 0; str[i] != '\0'; i++)
    { //check for only alphabets not space or any special characters
        if ((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z'))
        { // check for vowel
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' 
                || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowel++;
            }
            else
            {
                cons++;
            }
        }
    }
    printf(" Total Vowels in the string are %d\n Total Consonants in the string are %d",vowel,cons);
    return 0;
}