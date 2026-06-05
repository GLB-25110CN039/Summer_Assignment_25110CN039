/*PROBLEM: to print reverse star pattern.
 *****
 ****
 ***
 **
 *
*/
#include <stdio.h>
int main()
{
    int n = 5;
    for (int row = n; row; row--)
    { // outer loop in decrement as reverse star pattern.
        for (int col = row; col; col--)
        {
            // inner loop is also in decrement as no.of columns decreases in moving down.
            printf("*");
        }
        printf("\n");
    }
    return 0;
}