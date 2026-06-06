#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to count its set bits :");
    // set bits of a number is total number of 1's present in its binary representation
    scanf("%d", &num);
    int count = 0;
    while (num > 0)
    {
        num = num & (num - 1);
        count++;
    }
    printf("set bits of entered no. is %d", count);
    return 0;
}