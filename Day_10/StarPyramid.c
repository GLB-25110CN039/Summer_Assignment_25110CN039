/* PROBLEM 37: to print a star pyramid pattern.
           *
          ***
         ***** 
        *******
       *********
 */
#include<stdio.h>
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)//outer loop is for no.of rows in the pattern.
    {
        for (int space = 1; space <= (n-row); space++){//spaces are in decreasing order .
             printf(" ");
        }
        for (int col = 1; col <= (2 * row - 1); col++){//rows has odd no. star and consecutive spaces.       {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}