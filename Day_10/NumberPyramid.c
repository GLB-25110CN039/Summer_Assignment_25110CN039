/* PROBLEM 39:to print number pyramid.
         1
        121
       12321
      1234321
     123454321
*/
#include <stdio.h>
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)//outer loop is for no.of rows.
    {
        for (int space = 1; space <= (n - row); space++)//space decrease with increase in rows.
        {
            printf(" ");//5th row has no space.
        }
        for (int col = 1; col <= (2 * row - 1); col++)
        {
            if (col <= row)
            {
                printf("%d", col);//for printing no.in series.
            }
            else
            {
                printf("%d", (2 * row - col));//for reverse numbers printing.
            }
        }
        printf("\n");
    }
    return 0;
}