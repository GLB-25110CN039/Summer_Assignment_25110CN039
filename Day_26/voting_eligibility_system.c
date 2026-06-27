#include <stdio.h>
int main()
{
    char name[50];
    char gender;
    char nationality[30];
    int age, choice;
    do
    {
        printf("\n===== VOTING ELIGIBILITY SYSTEM =====\n");
        // Input details
        printf("Enter Name: ");
        scanf(" %s", name);
        printf("Enter Age: ");
        scanf("%d", &age);
        printf("Enter Gender (M/F): ");
        scanf(" %c", &gender);
        printf("Enter Nationality: ");
        scanf("%s", nationality);
        printf("\n----- DETAILS -----\n");
        printf("Name        : %s\n", name);
        printf("Age         : %d\n", age);
        printf("Gender      : %c\n", gender);
        printf("Nationality : %s\n", nationality);
        // Validation and eligibility check
        if (age < 0 || age > 120)//age greater than 120 is considered as max age limit
        {
            printf("\nInvalid age entered!\n");
        }
        else if (age >= 18)
        {
            printf("\nStatus: ELIGIBLE TO VOTE\n");
            printf("You can participate in elections.\n");
        }
        else
        {
            printf("\nStatus: NOT ELIGIBLE TO VOTE\n");
            printf("You need %d more year(s) to become eligible.\n",
                   18 - age);
        }
    } while (choice == 1);
    printf("\nThank you for using the Voting Eligibility System!\n");
    return 0;
}
