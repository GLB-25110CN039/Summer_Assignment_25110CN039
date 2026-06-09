// PROBLEM50:find sum and average of an array.
#include <stdio.h>
int main()
{
    int n; // n is length of array.
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements of array at index %d : ",i);
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of elements of the array: %d\n ", sum);
    printf("Average of elements of the array: %.2f\n ", (float)sum / n);
    return 0;
}