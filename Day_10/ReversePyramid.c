/* PROBLEM 38: to print a reverse pyramid.
     *********
      *******
       *****
        ***
         *
*/
#include<stdio.h>
int main() {
    int n = 5;
    for (int row = n; row; row--){//as pattern is reverse so,row decrement.
        for(int space = 1; space <= (n-row); space++){//5th row has no space.
            printf(" ");//space decrease with increase in no.of rows.
        }
        for (int col = (2*row-1) ; col ; col--){//inner loop is for no.of column.
            printf("*");
        }
        printf("\n");
    }
    return 0;
}