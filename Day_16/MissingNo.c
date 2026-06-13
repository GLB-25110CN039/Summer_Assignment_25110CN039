// /PROBLEM61:find missing number in array.
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
    int total = n * (n + 1) / 2;//sum of n natural numbers and array elemnts are in order of it.
    int sum = 0, missing_no;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    missing_no = total - sum;
    printf("\nMissing number in the array: %d", missing_no);

    return 0;
}