#include <stdio.h>
// PROGRAM41:find sum of two numbers using function.
void sum(int, int);
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum(a, b);
}
void sum(int x, int y)
{
    int z;
    z = x + y;
    printf("Sum of %d and %d is %d", x, y, z);
}