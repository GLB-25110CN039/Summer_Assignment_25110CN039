// /PROBLEM68:find common elements in array.
#include <stdio.h>
int main()
{
    int a[50], b[50], common[50];
    int m, n;
    printf("Enter number of elements of array 1: ");
    scanf("%d", &m); // size of array 1
    for (int i = 0; i < m; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &a[i]); // input array 1 elements
    }
    printf("Array 1:");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]); // prints array1
    }
    printf("\nEnter number of elements of array 2: ");
    scanf("%d", &n); // size of array 2
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &b[i]); // input array 2 elements
    }
    printf("Array 2:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]); // prints array 2
    }
    int count = 0;// for counting no. of common elements
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i]==b[j]){
            common[count] = b[j];//first store value
            count++;//then increase counter
        }
    }
    }
    printf("\nNumber of common elements in both arrays: %d", count);
    printf("\nArray of common elements : ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", common[i]);// prints array containing common elements
    }
    return 0;
}
