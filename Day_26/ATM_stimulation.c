#include <stdio.h>
int main()
{
    int choice;
    float balance = 10000, amount;
    do
    {
        printf("ATM MENU===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Current Balance = %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Amount deposited successfully.\n");
            printf("Updated balance = %.2f\n", balance);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= balance)
            {
                balance = balance - amount;
                printf("Amount withdrawn successfully\n");
                printf("Remaining balance = %.2f\n", balance);
            }
            else
            {
                printf("Insufficient balance\n");
            }
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (choice != 4);
    return 0;
}