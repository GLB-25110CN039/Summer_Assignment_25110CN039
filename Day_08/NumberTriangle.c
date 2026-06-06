/* PROGRAM:to print number triangle.
      1
      12
      123
      1234
      12345
*/
#include <stdio.h>
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)//outer loop for no. of rows.
    {
        for (int col = 1; col <= row; col++)// inner loop for no.of columns.
        // in row 1, there is 1 column  .in row 2, there is 2 column and so on.
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}