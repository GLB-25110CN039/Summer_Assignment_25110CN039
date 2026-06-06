/* PROGRAM: to print a character triangle .
      A
      AB
      ABC
      ABCD
      ABCDE
*/
#include <stdio.h>
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++) // outer loop for no. of rows.
    {
        char ch = 'A';                       // char is placed inside row loop as each row starts with character 'A'.
        for (int col = 1; col <= row; col++) // inner loop for no. of columns.
        {
            printf("%c", ch);
            ch++; // updation is required as in above pattern, character increases with increase in no. of columns.
        }
        printf("\n");
    }
    return 0;
}