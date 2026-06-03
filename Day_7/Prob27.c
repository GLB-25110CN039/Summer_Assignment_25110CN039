#include <stdio.h>
int sumofdigits(int);
int main()
{
    int n, sum;
    printf("Enter a number to sum its digits :");
    //PROGRAM:find sum of digits of a no. using recursion.
    scanf("%d", &n);
    sum = sumofdigits(n);
    printf("Sum of digits of %d is %d", n, sum);
    return 0;
}
int sumofdigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sumofdigits(n / 10);
    }
}