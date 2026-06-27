#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[100];
    int n = 0;
    int choice, i, roll, found;
    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].rollNo);
                printf("Enter Name: ");
                scanf(" %s", s[n].name);
                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);
                n++;
                printf("Student Added Successfully!\n");
                break;
            case 2:
                if(n == 0)
                {
                    printf("No Records Found!\n");
                }
                else
                {
                    printf("\n--- Student Records ---\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll No : %d\n", s[i].rollNo);
                        printf("Name    : %s\n", s[i].name);
                        printf("Marks   : %.2f\n", s[i].marks);
                    }
                }
                break;
            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll No : %d\n", s[i].rollNo);
                        printf("Name    : %s\n", s[i].name);
                        printf("Marks   : %.2f\n", s[i].marks);
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
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}