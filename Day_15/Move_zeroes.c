// PROBLEM60:move zeroes to end without changing order of non zero element array.
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
        scanf("%d", &arr[i]);
    }
    printf("Original array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // prints original array
    }
    int NonZero = 0;//fix first non zero element to 0th index
    //loop is used to swap nonzero elements while traversing array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)//for nonzero elements
        {
            int temp = arr[i];
            arr[i] = arr[NonZero];
            arr[NonZero] = temp;
            NonZero++;// it will move to next index
        }
    }
    printf("\nModified array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);//prints array with all zeroes at end and all non zeroes to left.
    }
    return 0;
}
