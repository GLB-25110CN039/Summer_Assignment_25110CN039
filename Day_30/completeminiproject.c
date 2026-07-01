// Student Management System using Arrays, Functions and Strings
#include <stdio.h>
#include <string.h>
int roll[50], n = 0;
char name[50][50];
float marks[50];
void addStudent();
void displayStudents();
void searchStudent();
int main()
{
    int choice;
    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
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
// Function to add student
void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &roll[n]);
    getchar();
    printf("Enter Name: ");
    gets(name[n]);
    printf("Enter Marks: ");
    scanf("%f", &marks[n]);
    n++;
    printf("Student Added Successfully!\n");
}
// Function to display students
void displayStudents()
{
    int i;
    if(n == 0)
    {
        printf("No Records Found!\n");
        return;
    }
    printf("\n----- STUDENT RECORDS -----\n");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", roll[i]);
        printf("Name    : %s\n", name[i]);
        printf("Marks   : %.2f\n", marks[i]);
    }
}
// Function to search student
void searchStudent()
{
    int i, searchRoll, found = 0;
    printf("Enter Roll Number to Search: ");
    scanf("%d", &searchRoll);
    for(i = 0; i < n; i++)
    {
        if(roll[i] == searchRoll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Student Not Found!\n");
    }
}