#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int choice;
    // Input string from user
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    // Remove newline character added by fgets
    str1[strcspn(str1, "\n")] = '\0';
    do
    {
        // Display menu
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character
        switch(choice)
        {
            case 1:
                // Find and display length of string
                printf("Length of string = %d\n", strlen(str1));
                break;
            case 2:
                // Copy first string into second string
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;
            case 3:
                // Input another string for concatenation
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                // Join second string to first string
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;
            case 4:
            {
                // Input another string for comparison
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                int result = strcmp(str1, str2);
                if(result == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            }
            case 5:
            {
                // Reverse string using loop
                int len = strlen(str1);
                printf("Reversed String = ");
                for(int i = len - 1; i >= 0; i--)
                {
                    printf("%c", str1[i]);
                }
                printf("\n");
                break;
            }
            case 6:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 6); // Repeat menu until Exit is selected
    return 0;
}