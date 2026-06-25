#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char names[10][50]; // store 10 names upto 50 characters
    printf("Enter number of names: ");
    scanf("%d", &n);
    char temp[50]; // array for sorting
    printf("Enter names: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    // loop for sorting names
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            { // swapping of two strings
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("Sorted names are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}