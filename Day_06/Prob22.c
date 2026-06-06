#include <stdio.h>
int main()
{
    int num, rem, d = 0, base = 1;
    printf("Enter the binary number to convert it into decimal :");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        d = d + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("Decimal number :%d", d);
    return 0;
}