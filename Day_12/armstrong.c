// PROBLEM46: program to check armstrong number using function.
#include <stdio.h>
#include <math.h>
void Is_Armstrong(int); // function prototype
int main()
{
    int m;
    printf("Enter a number : ");
    scanf("%d", &m);
    Is_Armstrong(m); // function call
    return 0;
}
void Is_Armstrong(int x)
{ // function definition
    int rem;
    int n = 0;
    int temp = x;
    while (temp != 0)
    {
        temp = temp / 10;
        n++; // this will calculate no.of digits in the number
    }
    int y = x;
    int s = 0;
    while (y != 0)
    {
        rem = y % 10;
        s = s + pow(rem, n);//this will add the digits raise to the power of no.of digits one by one 
        y = y / 10;
    }
    if (x == s)
        printf("Armstrong number");
    else
        printf("Not an armstrong number");
}
