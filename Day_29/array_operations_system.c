#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int choice, pos, value;
    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    do
    {
        // Display menu
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Find Largest Element\n");
        printf("6. Find Smallest Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                // Print all array elements
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                // Shift elements right to make space
                for(i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }
                // Insert new value
                arr[pos - 1] = value;
                n++;
                printf("Element inserted successfully.\n");
                break;
            case 3:
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &pos);
                // Shift elements left to overwrite deleted element
                for(i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted successfully.\n");
                break;
            case 4:
            {
                int key, found = 0;
                printf("Enter element to search: ");
                scanf("%d", &key);
                // Check each element one by one
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                // If element is not found
                if(found == 0)
                {
                    printf("Element not found.\n");
                }
                break;
            }
            case 5:
            {
                // Assume first element is largest
                int max = arr[0];
                // Compare with remaining elements
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                    {
                        max = arr[i];
                    }
                }
                printf("Largest Element = %d\n", max);
                break;
            }
            case 6:
            {
                // Assume first element is smallest
                int min = arr[0];
                // Compare with remaining elements
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                    {
                        min = arr[i];
                    }
                }
                printf("Smallest Element = %d\n", min);
                break;
            }
            case 7:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 7); // Repeat until user chooses Exit
    return 0;
}