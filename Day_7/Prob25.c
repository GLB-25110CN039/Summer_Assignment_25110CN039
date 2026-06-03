#include <stdio.h>
int factorial(int);
int main()
{
    int n, fact;
    printf("Enter a number to find its factorial :");
    // PROGRAM:to find factorial using recursion
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;
}
int factorial(int n)
{
    int answer;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}