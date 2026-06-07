#include <stdio.h>
// PROGRAM43:find factorial using function.
int Factorial(int);
int main()
{
    int m, result;
    printf("Enter the number: ");
    scanf("%d", &m);
    result = Factorial(m);
    printf("Factorial of %d is %d", m, result);
    return 0;
}
int Factorial(int n)
{
    int fact = 1;
    if (n == 0)
    {
        fact = 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    return fact;
}
