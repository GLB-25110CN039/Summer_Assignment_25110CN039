// /PROBLEM62:find maximum frequency element in array.
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
    int freq = 0, max_freq = 0, max_freq_element = 0;
    for (int i = 0; i < n; i++)
    {
        freq = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > max_freq)
        {
            max_freq = freq;
            max_freq_element = arr[i];
        }
    }
    printf("\nMaximum frequency element is %d and occurs %d times", max_freq_element, max_freq);
    return 0;
}