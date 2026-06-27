#include <stdio.h>
struct Book
{
    int id;
    char name[50];
    char author[50];
};
int main()
{
    struct Book b[100];
    int n = 0;
    int choice, searchId, found = 0;
    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &b[n].id);
                printf("Enter Book Name: ");
                scanf(" %[^\n]", b[n].name);
                printf("Enter Author Name: ");
                scanf(" %s", b[n].author);
                n++;
                printf("Book added successfully!\n");
                break;
            case 2:
                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nBook Records:\n");
                    for(int i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("ID     : %d\n", b[i].id);
                        printf("Name   : %s\n", b[i].name);
                        printf("Author : %s\n", b[i].author);
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);
                found = 0;
                for(int i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("ID     : %d\n", b[i].id);
                        printf("Name   : %s\n", b[i].name);
                        printf("Author : %s\n", b[i].author);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book not found.\n");
                }
                break;
            case 4:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}