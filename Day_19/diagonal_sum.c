#include <stdio.h>
int main()
{
    int m, n; // m=n as sum of diagonal elements must be calculated in square matrix.
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d%d", &m, &n); // size of 2d array or matrix.
    int a[m][n], sum = 0;
    for (int i = 0; i < m; i++)
    { // i denotes no.of rows .
        for (int j = 0; j < n; j++)
        { // j denotes no.of columns.
            printf("Enter element of matrix at row %d and column %d: ", i, j);
            scanf("%d", &a[i][j]); // input elements of matrix.
        }
    }
    printf("Original matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m && i < n; i++)//using one loop will reduce time complexity of program.
    {
        sum = sum + a[i][i];
    }
    printf("Sum of diagonal elements of matrix: %d", sum);
    return 0;
}
