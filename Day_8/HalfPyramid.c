#include <stdio.h>
int main()
{
    int n = 6;
    /* PROGRAM:to print a half pyramid star patten.
            *
            * *
            * * *
            * * * *
            * * * * *
            * * * * * *
    */
    
    for (int row = 1; row <= n; row++) // outer loop for no. of rows.
    {
        for (int col = 1; col <= row; col++) // inner loop for no. of columns.
        //in row 1, there is 1 column and in row 2 ,there is 2 column and so on...
        {
            printf("* ");// there is a gap in between two stars.
        }
        printf("\n");
    }
    return 0;
}