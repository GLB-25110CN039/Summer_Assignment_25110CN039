// /PROBLEM65:merge array.
#include <stdio.h>
int main()
{
    int a[50], b[50];
    int m, n;
    printf("Enter number of elements of array 1: ");
    scanf("%d", &m); // size of array 1
    for (int i = 0; i < m; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &a[i]); // input array 1 elements
    }
    printf("Array 1:");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]); // prints array1
    }
    printf("\nEnter number of elements of array 2: ");
    scanf("%d", &n); // size of array 2
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &b[i]); // input array 2 elements
    }
    printf("Array 2:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]); //prints array 2
    }
    for (int i = 0; i < n; i++)
    {
        a[m + i] = b[i];//merges array 2 with array 1
    }
    printf("\nMerged array: ");
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}