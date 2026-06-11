// PROBLEM58:rotate the array to the left.
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
    printf("\nEnter the position you want to rotate the array to left by:");
    scanf("%d", &p);
    for (int i = 0; i < p; i++)//iterates for position the user enters
    {
        int first = arr[0];//stores first element of array
        for (int j = 1; j < n; j++)
        {
            arr[j - 1] = arr[j];//shifts elements to left except first element
        }
        arr[n - 1] = first;//stores first element into last index incase of shifting to position 1
    }
    printf("Rotated array to the left: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);//prints modified array
    }
    return 0;
}
