// /PROBLEM63:find pair with given sum.
#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter number of elements of array: ");
    scanf("%d", &n); // size of array
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &arr[i]); // input array elements
    }
    printf("Original array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // prints original array
    }
    int i, j, sum, count = 0;
    printf("\nEnter sum: ");
    scanf("%d", &sum);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("Pair for the given sum are %d and %d", arr[i], arr[j]);
                count++;
            }
        }
    }
    return 0;
}