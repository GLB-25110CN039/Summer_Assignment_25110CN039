// PROBLEM45: program to check palindrome number using function.
#include <stdio.h>
void is_palindrome(int); // function prototype
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    is_palindrome(x); // function call
    return 0;
}
void is_palindrome(int y)//function definition
{
    int n, rev = 0;
    n = y;
    while (y != 0)
    {
        rev = (rev * 10) + (y % 10);
        y = y / 10;
    }
    if (n == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
