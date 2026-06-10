// PROBLEM53:linear search.
#include <stdio.h>
int LinearSearch(int arr[], int size, int element);
int main()
{
    int arr[] = {5, 78, 89, 123, 9, 986, 34, 654, 22};//array can either be sorted or unsorted.
    int size = sizeof(arr) / sizeof(int); // calculates size of array.
    int element = 654;
    int search = LinearSearch(arr, size, element);
    printf("Element %d is found at %d index", element, search);
    return 0;
}
//Linear search is done through array traversal.
int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i; // returns index of array
        }
    }
    return -1; // indicates that element is not present in the array
}