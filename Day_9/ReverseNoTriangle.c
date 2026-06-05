/*PROBLEM: to print reverse number triangle.
     12345
     1234
     123
     12
     1
*/
#include <stdio.h>
int main()
{
    int n = 5;
    for (int row = n; row; row--)
    { // outer loop is for no.of rows.
        for (int col = 1; col <= row; col++)
        {
            // inner loop is for no.of columns and it has increment.
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}