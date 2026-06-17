#include <stdio.h>
int main()
{
    // binary search is done only in sorted array.
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]); // input elemnts of array
    }
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // prints array
    }
    int low = 0, high = n - 1, mid, element; // low, high and mid will store the index of array.
    printf("\nEnter the element to be searched through binary search: ");
    scanf("%d", &element);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            printf("Element %d found at index %d", element, mid);
            break;
        }
        else if (arr[mid] < element)
        {                  // we need to search element in last half of sorted array
            low = mid + 1; // low will be updated to next index of mid as mid doesnot have element
        }
        else
        {
            // we  need to search element in first half of sorted array
            high = mid - 1; // high will be updated to previous index as mid doesn't have element
        }
    }
    if (low > high)
    {
        printf("Element not found"); // low and high overlaps.
    }
    return 0;
}