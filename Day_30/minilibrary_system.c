// Mini Library Management System
#include <stdio.h>
#include <string.h>
int main()
{
    int id[50];
    char book[50][50];
    int quantity[50];
    int n = 0;
    int choice, i, searchId, found;
    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                // Add new book
                printf("Enter Book ID: ");
                scanf("%d", &id[n]);
                getchar(); // Clear Enter key from buffer
                printf("Enter Book Name: ");
                gets(book[n]);
                printf("Enter Quantity: ");
                scanf("%d", &quantity[n]);
                n++;
                printf("Book Added Successfully!\n");
                break;
            case 2:
                // Display all books
                if(n == 0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    printf("\n----- BOOK LIST -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID   : %d\n", id[i]);
                        printf("Book Name : %s\n", book[i]);
                        printf("Quantity  : %d\n", quantity[i]);
                    }
                }
                break;
            case 3:
                // Search book by ID
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID   : %d\n", id[i]);
                        printf("Book Name : %s\n", book[i]);
                        printf("Quantity  : %d\n", quantity[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}