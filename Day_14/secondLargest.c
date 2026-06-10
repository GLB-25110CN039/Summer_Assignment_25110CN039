// PROBLEM55:to find second largest element in array.
#include <stdio.h>
int main()
{
    int arr[100];
    int n, max1, max2;//max1 is largest element while max2 is second largest element
    printf("Enter number of elements of array: ");
    scanf("%d", &n); // size of array
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }else{
        max1 = arr[1];
        max2 = arr[0];
    }
    for (int i = 2; i < n; i++)//for index 0 and 1 we have already found max1 and max2.
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
            max2 = arr[i];
    }
    printf("Second largest element of the array is %d", max2);

    return 0;
}