#include <stdio.h>
int main()
{
    int empId;
    char name[50];
    float salaryPerDay;
    int daysWorked;
    float bonus;
    float totalSalary;
    printf("===== SALARY MANAGEMENT SYSTEM =====\n");
    printf("Enter Employee ID: ");
    scanf("%d", &empId);
    printf("Enter Employee Name: ");
    scanf(" %s", name);
    printf("Enter Salary Per Day: ");
    scanf("%f", &salaryPerDay);
    printf("Enter Days Worked: ");
    scanf("%d", &daysWorked);
    printf("Enter Bonus: ");
    scanf("%f", &bonus);
    totalSalary = (salaryPerDay * daysWorked) + bonus;
    printf("\n===== SALARY REPORT =====\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s\n", name);
    printf("Days Worked   : %d\n", daysWorked);
    printf("Salary/Day    : %.2f\n", salaryPerDay);
    printf("Bonus         : %.2f\n", bonus);
    printf("Total Salary  : %.2f\n", totalSalary);
    return 0;
}