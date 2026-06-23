#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i, j, count = 0, maxcount = 0;
    char max_occuring_char;
    printf("Enter a string to find maximum occuring character: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        count=0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (maxcount < count)
        {
            maxcount = count;
            max_occuring_char = str[i];
        }
    }
    printf("The character '%c' is maximum occuring and it occurs %d times", max_occuring_char, maxcount);
    return 0;
}