#include <stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter the range upto which you want to print fibonacci series : ");
    // PROGRAM:to print fibonacci series using recursion.
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("0 ");
    }
    if (n >= 2)
    {
        printf("1 ");
    }
    if (n > 2)
    {
        fibonacci(n - 2);
    }
    return 0;
}
void fibonacci(int n)
{
    static int n1 = 0, n2 = 1;
    int n3;
    if (n > 0)
    {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        fibonacci(n - 1);
    }
}