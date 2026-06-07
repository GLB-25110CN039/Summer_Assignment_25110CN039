#include <stdio.h>
// PROBLEM42: check prime number using function.
void Check_Prime(int);
int main()
{
    int m;
    printf("Enter the number: ");
    scanf("%d", &m);
    Check_Prime(m);
    return 0;
}
void Check_Prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is not prime");
    }
}