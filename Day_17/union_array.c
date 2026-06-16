// /PROBLEM66:union of  two sorted array.
// union means unique and common elements in the array.
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
    printf("Array1: ");
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
    printf("Array2: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]); // prints array 2
    }
    int Union[m + n], i = 0, j = 0, k = 0;
    // main loop for common and unique elements
    while (i < m && j < n)
    {
        // skip duplicates in array a[]
        if (i > 0 && a[i] == a[i - 1])
            i++;
        // skip duplicates in array b[]
        if (j > 0 && b[j] == b[j - 1])
            j++;
        if (a[i] < b[j])
        {
            Union[k++] = a[i++];
        }
        else if (b[j] < a[i])
        {
            Union[k++] = b[j++];
        }
        else
        {
            Union[k++] = a[i++];
            j++;
        }
    }
    // for printing remaining elements of array
    // add remaining elements from array a[]
    while (i < m)
    {
        if (i == 0 || a[i] != a[i - 1])
        {
            Union[k++] = a[i];
            i++;
        }
    }
    // add remaining elements from array b[]
    while (j < n)
    {
        if (j == 0 || b[j] != b[j - 1])
        {
            Union[k++] = b[j];
            j++;
        }
    }
    printf("\nUnion of two arrays a[m] and b[n] : ");
    for (int x = 0; x < k; x++)
    {
        printf("%d ", Union[x]);
    }
    return 0;
}
