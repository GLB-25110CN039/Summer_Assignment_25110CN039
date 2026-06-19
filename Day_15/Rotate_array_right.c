// /PROBLEM59:rotate array to right.
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
        printf("%d ", arr[i]);//prints original array
    }
    int p;
    printf("\nEnter the position you want to rotate the array to right by:");
    scanf("%d", &p);
    for (int i = 0; i < p; i++)//iterates for position the user enters
    {
        int last = arr[n-1];//stores last element of array
        for (int j = n-1; j >0; j--)
        {
            arr[j] = arr[j - 1];//shifts elements to right except last element
        }
        arr[0] = last;//stores last element into 0th index incase of shifting to position 1
    }
    printf("Rotated array to the right: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);//prints modified array
    }
    return 0;
}
         

