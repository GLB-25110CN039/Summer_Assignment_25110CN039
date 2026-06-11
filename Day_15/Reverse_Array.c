// PROBLEM57:to reverse an array.
#include <stdio.h>
int main()
{
    int arr[100];
    int n,i;
    printf("Enter number of elements of array: ");
    scanf("%d", &n); // size of array
    for (i = 0; i < n; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &arr[i]);//input the array elements
    }
    printf("Original Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);//it will print the required array in normal order
    }
    printf("\nReversed array : ");
    for (int i = n-1; i>=0; i--)//to print in reverse order ,we have to traverse array backwards
    {
        printf("%d ", arr[i]);//it will print array in reverse order
    }
    return 0;
}