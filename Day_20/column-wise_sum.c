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
    printf("Column-wise Sum of matrix elements: \n");
    for (int i = 0; i < n; i++) // outer loop (i)for columns
    {
        int sum = 0;                // reinitialize sum for each new column
        for (int j = 0; j < m; j++) // inner loop (j)for rows
        {
            sum = sum + matrix[j][i];
        }
        printf("Sum of column %d elements: %d\n", i + 1, sum);
    }
    return 0;
}
