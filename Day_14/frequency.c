// PROBLEM54:to count frequency of an element.
#include <stdio.h>
int main()
{
    int arr[100];
    int n, element, frequency = 0;
    printf("Enter number of elements of array: ");
    scanf("%d", &n); // size of array
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d at index %d is :", i + 1, i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element whose frequency is to be found: ");
    scanf("%d", &element);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element) // first find elemnt in the array
        {
            frequency++; // then count frequency
        }
    }
    printf("Frequency of element %d is %d\n", element, frequency);
    return 0;
}