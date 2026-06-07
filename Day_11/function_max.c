#include <stdio.h>
// PROGRAM42: find maximum using function.
int maximum(int, int);
int main()
{
    int a, b, result;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    result = maximum(a, b);
    printf("Maximum number :%d ", result);
    return 0;
}
int maximum(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}