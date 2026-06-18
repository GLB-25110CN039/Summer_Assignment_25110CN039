#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d%d", &m, &n); // size of 2d array or matrix.
    int a[m][n];
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
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix: \n"); // transpose means to change columns to rows and vice-versa.
    for (int i = 0; i < n; i++)
    { // outer loop will iterate through no.of columns.
        for (int j = 0; j < m; j++)
        {                           // inner loop will iterate through no.of rows.
            printf("%d ", a[j][i]); // prints transpose matrix.
        }
        printf("\n");
    }
    return 0;
}
