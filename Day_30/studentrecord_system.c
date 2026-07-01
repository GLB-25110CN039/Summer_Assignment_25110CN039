// Student Record System using Arrays and Strings
#include <stdio.h>
#include <string.h>
int main()
{
    int roll[50];
    char name[50][30];
    float marks[50];
    int n = 0;      // Number of students
    int choice, i, searchRoll;
    int found;
    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                // Add a new student record
                printf("\nEnter Roll Number: ");
                scanf("%d", &roll[n]);
                printf("Enter Name: ");
                getchar(); 
                gets(name[n]);
                printf("Enter Marks: ");
                scanf("%f", &marks[n]);
                n++;   // Increase student count
                printf("Record Added Successfully!\n");
                break;
            case 2:
                // Display all student records
                if(n == 0)
                {
                    printf("No Records Available!\n");
                }
                else
                {
                    printf("\n--- Student Records ---\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %.2f\n", marks[i]);
                    }
                }
                break;
            case 3:
                // Search student by roll number
                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %.2f\n", marks[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Student Not Found!\n");
                }
                break;
            case 4:
                printf("Program Ended.\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}