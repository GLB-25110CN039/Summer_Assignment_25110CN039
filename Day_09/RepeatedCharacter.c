/* PROBLEM: to print a repeated character pattern.
      A
      BB
      CCC
      DDDD
      EEEEE
*/
#include <stdio.h>
int main()
{
    int n = 5;
    char ch = 'A';
    for (int row = 1; row <= n; row++)
    { // outer loop is for no.of rows.
        for (int col = 1; col <= row; col++)
        { // inner loop is for no.of columns.
            printf("%c", ch);
        }
        ch++; // character ch='A'is increased after every row.
        printf("\n");
    }
    return 0;
}