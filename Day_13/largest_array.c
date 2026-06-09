// PROBLEM51:find largest and smallest element in an array.
#include <stdio.h>
int returnMin(int array[], int);
int returnMax(int array[], int);
int main()
{
    int arr[10] = {3, 8, 98, 45698, 100};//given array of size 5 .
    int max = returnMax(arr, 5);
    int min = returnMin(arr, 5);
    printf("maximum element of the array: %d\n", max);
    printf("minimum element of the array: %d\n", min);
    return 0;
}
int returnMax(int array[], int n)
{
    int max = array[0];//initialise to first element of array so that max can traverse to its each element
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
int returnMin(int array[], int n)
{
    int min = array[0];/*initialise to first element of array not to 0 
    because if initialise to 0 then it will always display minimum element 0 
    if we enter all positive integers in the array.*/
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}