#include <stdio.h>
int main()
{ // two matrices can be multiplied only when column of first and row of second matrix are same.
    int m, n, x, y;
    printf("Enter number of rows and columns of matrix 1: ");
    scanf("%d%d", &m, &n); // size of 2d array or matrix1.
    int a[m][n] ;
    for (int i = 0; i < m; i++)
    { // i denotes no.of rows .
        for (int j = 0; j < n; j++)
        { // j denotes no.of columns.
            printf("Enter element of matrix 1 at row %d and column %d: ", i, j);
            scanf("%d", &a[i][j]); // input elements of matrix 1.
        }
    }
    printf("Enter number of rows and columns of matrix 2: ");
    scanf("%d%d", &x, &y); // size of 2d array or matrix2.
    int b[x][y], multiply[m][y];
    for (int i = 0; i < x; i++)
    { // i denotes no.of rows .
        for (int j = 0; j < y; j++)
        { // j denotes no.of columns.
            printf("Enter element of matrix 2 at row %d and column %d: ", i, j);
            scanf("%d", &b[i][j]); // input elements of matrix 2.
        }
    }
    // multiplication of 2 matrices.
    if (n != x)
    {
        printf("Multiplication of matrices is not possible!");
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < y; j++)
            { 
                multiply[i][j]=0;//initialize to 0 otherwise it will take garbage value to print sum
                for (int k = 0; k < n; k++)
                {
                    multiply[i][j] += a[i][k] * b[k][j];//to sum the products.
                }
            }
        }
    }
    printf("Multiplication of two matrices: \n");
    for (int i = 0; i < m; i++)//after multiplication,row of first matrix left.
    {
        for (int j = 0; j < y; j++)//after multiplication,column of second matrix left.
        {
            printf("%d ", multiply[i][j]); // prints output multiplication matrix.
        }
        printf("\n");
    }
    return 0;
}
