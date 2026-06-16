// /PROBLEM67:intersection(common elements) of  two sorted arrays.
#include <stdio.h>
int main()
{
    int a[50], b[50], intersection[50];
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
        printf("%d ", b[i]); // prints array 2
    }
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            i++; // move pointer in array a[]
        }
        else if (b[j] < a[i])
        {
            j++; // move pointer in array b[]
        }
        else
        {
            // both array elements are equal
            intersection[k++] = a[i];//store eleemnt in resultant
            i++;//move pointer in array a[]
            j++;//move pointer in array b[]
        }
    }
        printf("\nIntersection of two arrays: ");
        for (int x = 0; x < k; x++)
        {
            printf("%d ", intersection[x]);
        }
        return 0;
    }