// PROBLEM47: program to print fibonacci series using function.
#include <stdio.h>
void print_fibonacci(int); // function prototype
int main()
{
    int m;
    printf("Enter the no. of terms : ");
    scanf("%d", &m);
    print_fibonacci(m); // function call
    return 0;
}
void print_fibonacci(int n)
{ // function definition
    printf("Fibonacci series : ");
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);//print the current number
        c = a + b;//calculate next value
        a = b;//assign value of b to a
        b = c;//assign value of c to b
    }
}