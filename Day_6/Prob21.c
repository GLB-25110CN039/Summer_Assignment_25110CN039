#include <stdio.h>
int main()
{
    int num, rem, i;
    printf("Enter a decimal no. : ");
    scanf("%d", &num);
    // program to convert decimal no.into binary no.
    int a[10];
    if (num == 0)
    {
        printf("0");
    }
    for (i = 0; num > 0; i++)
    {
        rem = num % 2;
        num = num / 2;
        a[i] = rem;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    return 0;
}