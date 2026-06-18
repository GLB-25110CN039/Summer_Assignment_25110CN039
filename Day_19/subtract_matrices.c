#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter number of rows and columns of both matrices: ");
    scanf("%d%d", &m, &n); // size of 2d array or matrix.
    int a[m][n], b[m][n], subtract[m][n];
    for (int i = 0; i < m; i++)
    { // i denotes no.of rows .
        for (int j = 0; j < n; j++)
        { // j denotes no.of columns.
            printf("Enter element of matrix 1 at row %d and column %d: ", i, j);
            scanf("%d", &a[i][j]); // input elements of matrix 1.
        }
    } // for subtraction of 2 matrices, their order must be same.
    for (int i = 0; i < m; i++)
    { // i denotes no.of rows .
        for (int j = 0; j < n; j++)
        { // j denotes no.of columns.
            printf("Enter element of matrix 2 at row %d and column %d: ", i, j);
            scanf("%d", &b[i][j]); // input elements of matrix 2.
        }
    }
    // subtraction of 2 matrices.
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            subtract[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Subtraction of two matrices: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", subtract[i][j]); // prints output subtraction matrix.
        }
        printf("\n");
    }
    return 0;
}
