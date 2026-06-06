#include <stdio.h>
int main()
{
    int x, n;
    printf("Enter a number and its power : ");
    // program:to calculate exponentiation of a number without using pow()
    scanf("%d%d/n", &x, &n);
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        val = val * x;
    }
    printf("Value of %d to the power %d is %d", x, n, val);

    return 0;
}