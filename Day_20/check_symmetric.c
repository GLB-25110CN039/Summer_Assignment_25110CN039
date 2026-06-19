#include <stdio.h>
int check_symmetric(int rows, int cols, int arr[rows][cols]); // function prototype
int main()
{ // symmetric matrix is a matrix whose transpose is equal to the matrix.
    int m, n;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d%d", &m, &n); // size of 2d array or matrix.
    int a[m][n];
    if (m != n){
        printf("Matrix is not symmetric!"); // symmetric matrix is defined for square matrix only.
        return 0;
    }
    for (int i = 0; i < m; i++)
    { // i denotes no.of rows .
        for (int j = 0; j < n; j++)
        { // j denotes no.of columns.
            printf("Enter element of matrix at row %d and column %d: ", i, j);
            scanf("%d", &a[i][j]); // input elements of matrix.
        }
    }
    if (check_symmetric(m, n, a)) // function call
    {
        printf("The matrix is a Symmetric matrix!\n");
    }
    else
    {
        printf("The matrix is not a Symmetric matrix!\n");
    }
    return 0;
}
int check_symmetric(int rows, int cols, int arr[rows][cols]) // function definition
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            /* j is less than i to check only lower triangular part of square matrix.
               this will reduce time taken by program to check symmetric and we would not have
               to check the entire matrix.
              */
            if (arr[i][j] != arr[j][i])
            {
                return 0; // not symmetric
            }
        }
    }
    return 1; // symmetric
}
