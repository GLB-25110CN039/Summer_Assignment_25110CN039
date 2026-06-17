#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]); // input elemnts of array
    }
    printf("Unsorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // prints array
    }
    // sorting begins
    for (int i = 0; i < n - 1; i++)
    { // for bubble sort, there are total n-1 iterations
        for (int j = 0; j < n - i - 1; j++)
        { // in inner loop,for each value of i,there will be n-i-1 comparisons.
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1]; // swap
                arr[j + 1] = temp;
            }
        }
    } // sorting ends
    printf("\nSorted array through bubble sort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}