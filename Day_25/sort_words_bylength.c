#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char words[10][50]; // store 10 words upto 50 characters
    printf("Enter number of words: ");
    scanf("%d", &n);
    char temp[50]; // array for sorting
    printf("Enter words: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
    // loop for sorting words by length
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(words[i]) > strlen(words[j]))
            { // swapping of two strings
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    printf("Words sorted by length are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }
    return 0;
}