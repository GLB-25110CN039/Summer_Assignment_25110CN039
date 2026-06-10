// PROBLEM56:to find duplicates in array.
#include <stdio.h>
int main()
{
    int arr[100];
    int n, duplicates = 0;//duplicates means no. of elements occurs repetatively in array.
    printf("Enter number of elements of array: ");
    scanf("%d", &n); // size of array
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicates++;
                break;
            }
        }
    }
    printf("No. of Duplicate elements in the array :%d", duplicates);
    return 0;
}