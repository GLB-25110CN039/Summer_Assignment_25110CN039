// PROBLEM48: program to check perfect number using function.
#include <stdio.h>
void Is_Perfect(int); // function prototype or declaration
int main()
{
    int m;
    printf("Enter a number : ");
    scanf("%d", &m);
    Is_Perfect(m); // function call
    return 0;
}
void Is_Perfect(int n)//function definition
{
    int s = 0, i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (n == s)
        printf("Entered number is a perfect number");
    else
        printf("Entered number is not a perfect number");
}