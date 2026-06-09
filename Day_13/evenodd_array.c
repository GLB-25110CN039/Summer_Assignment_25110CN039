// PROBLEM52:count even and odd elements in an array.
#include <stdio.h>
int main()
{
    int n, arr[100];
    printf("Enter number of elements of the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements of array at index %d: ",i);
        scanf("%d", &arr[i]);
    }
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    printf("Even elements present in the array are %d\n", even_count);
    printf("Odd elements present in the array are %d\n", odd_count);
    return 0;
}