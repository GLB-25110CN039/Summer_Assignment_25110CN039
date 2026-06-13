// /PROBLEM64:to remove duplicates from array(sorted).
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
    printf("Original array with duplicates:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // prints original array
    }
    int x = 0;// x is index pointer. it will track unique elements in array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[x])//for unique elements 
        {
            x = x + 1;//if any unique or non-repetative element found,then x will increase
            arr[x] = arr[i];
        }
    }
    printf("\nArray without duplicates: ");
    for (int j = 0; j <= x; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}