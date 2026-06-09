// PROBLEM49:to input and display an array.
#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element of array at %d index : ", i);// i represents index of the array.
        scanf("%d", &arr[i]);//this will input the elements of array.
    }
    printf("Array elements are: \n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", arr[j]);//this will display the array elements.
    }
    return 0;
}