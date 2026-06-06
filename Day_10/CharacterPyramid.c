/* PROBLEM 40:to print a character pyramid.
         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
*/
#include <stdio.h>
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)//outer loop is for no.of rows.
    {
        for (int space = 1; space <= (n - row); space++)/*space is in all rows except 5th row
                    and it decreases with increase in row. */
        {
            printf(" ");
        }
        char ch = 'A';//each row starts with 'A' character. 
        for (int col = 1; col <= (2 * row - 1); col++)//inner loop is for no.of columns.
        {
              printf("%c", ch);
            if (row > col)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        printf("\n");
    }
    return 0;
}