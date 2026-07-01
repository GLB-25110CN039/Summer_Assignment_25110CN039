// Mini Employee Management System
#include <stdio.h>
#include <string.h>
int main()
{
    int empId[50];
    char empName[50][50];
    float salary[50];
    int n = 0;
    int choice, i, searchId, found;
    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                // Add employee details
                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);
                getchar(); // Clear input buffer
                printf("Enter Employee Name: ");
                gets(empName[n]);
                printf("Enter Salary: ");
                scanf("%f", &salary[n]);
                n++;
                printf("Employee Added Successfully!\n");
                break;
            case 2:
                // Display all employees
                if(n == 0)
                {
                    printf("No Employee Records Found!\n");
                }
                else
                {
                    printf("\n----- EMPLOYEE LIST -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("Employee ID   : %d\n", empId[i]);
                        printf("Employee Name : %s\n", empName[i]);
                        printf("Salary        : %.2f\n", salary[i]);
                    }
                }
                break;
            case 3:
                // Search employee by ID
                printf("Enter Employee ID to Search: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(empId[i] == searchId)
                    {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID   : %d\n", empId[i]);
                        printf("Employee Name : %s\n", empName[i]);
                        printf("Salary        : %.2f\n", salary[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Employee Not Found!\n");
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