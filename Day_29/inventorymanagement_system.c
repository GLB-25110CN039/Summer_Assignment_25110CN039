#include <stdio.h>
int main()
{
    int productId[100], quantity[100];
    float price[100];
    int n = 0; // Number of products
    int choice, i, id, found;
    do
    {
        // Display menu
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                // Add a new product
                printf("Enter Product ID: ");
                scanf("%d", &productId[n]);
                printf("Enter Quantity: ");
                scanf("%d", &quantity[n]);
                printf("Enter Price: ");
                scanf("%f", &price[n]);
                n++;
                printf("Product added successfully.\n");
                break;
            case 2:
                // Display all products
                if(n == 0)
                {
                    printf("No products available.\n");
                }
                else
                {
                    printf("\nID\tQuantity\tPrice\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%d\t\t%.2f\n",
                               productId[i],
                               quantity[i],
                               price[i]);
                    }
                }
                break;
            case 3:
                // Search product by ID
                printf("Enter Product ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(productId[i] == id)
                    {
                        printf("\nProduct Found\n");
                        printf("ID = %d\n", productId[i]);
                        printf("Quantity = %d\n", quantity[i]);
                        printf("Price = %.2f\n", price[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Product not found.\n");
                }
                break;
            case 4:
                // Update quantity of a product
                printf("Enter Product ID: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(productId[i] == id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &quantity[i]);
                        printf("Quantity updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Product not found.\n");
                }
                break;
            case 5:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 5); // Repeat menu until user selects Exit
    return 0;
}