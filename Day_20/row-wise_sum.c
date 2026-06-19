#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d%d", &m, &n); // size of 2d array or matrix.
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    { // i denotes no.of rows .
        for (int j = 0; j < n; j++)
        { // j denotes no.of columns.
            printf("Enter element of matrix at row %d and column %d: ", i, j);
            scanf("%d", &matrix[i][j]); // input elements of matrix.
        }
    }
    printf("Original matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Row-wise Sum of matrix elements: \n");
    for (int i = 0; i < m; i++) // outer loop for rows
    {
        int sum = 0;                // reinitialize sum for each new row
        for (int j = 0; j < n; j++) // inner loop for columns
        {
            sum = sum + matrix[i][j];
        }
        printf("Sum of row %d elements: %d\n", i + 1, sum);
    }
    return 0;
}
