/* PROGRAM: to print a repeated number pattern  q
       1
       22
       333
       4444
       55555
*/
#include <stdio.h>
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++) // outer loop for no.of rows.
    {
        for (int col = 1; col <= row; col++) // inner loop for no. of columns.
        // in row 1,there is 1 column and in row 2, there is 2 column and so on...
        {
            printf("%d", row); // elements in the pattern in each row are equals to no. of row.
        }
        printf("\n");
    }
    return 0;
}
