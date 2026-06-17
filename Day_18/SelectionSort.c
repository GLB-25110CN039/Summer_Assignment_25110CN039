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
    printf(" Unsorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // prints array
    }
    int smallest_index;
    for (int i = 0; i < n - 1; i++)
    { // for selection sort,there are n-1 iterations.
        smallest_index = i;
        for (int j = i + 1; j < n; j++)
        { // for each value of i, consider (i+1)th element will be smallest
            if (arr[j] < arr[smallest_index])
                smallest_index = j;
        }
        int temp = arr[i]; // swap after finding smallest element in each unsorted part
        arr[i] = arr[smallest_index];
        arr[smallest_index] = temp;
    }
    printf("\nSorted array through selection sort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}