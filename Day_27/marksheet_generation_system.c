#include <stdio.h>
int main()
{
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    printf("===== MARKSHEET GENERATION SYSTEM =====\n");
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);
    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);
    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);
    printf("Enter Marks of Subject 4: ");
    scanf("%f", &m4);
    printf("Enter Marks of Subject 5: ");
    scanf("%f", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    printf("\n\n===== STUDENT MARKSHEET =====\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", rollNo);
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    if (percentage >= 90)
        printf("Grade      : A+\n");
    else if (percentage >= 80)
        printf("Grade      : A\n");
    else if (percentage >= 70)
        printf("Grade      : B\n");
    else if (percentage >= 60)
        printf("Grade      : C\n");
    else if (percentage >= 40)
        printf("Grade      : D\n");
    else
        printf("Grade      : F\n");
    if (percentage >= 40)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");
    return 0;
}