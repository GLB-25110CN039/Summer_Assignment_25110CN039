/*
 PROBLEM 36: to print a hollow square pattern.
      *****
      *   *
      *   *
      *   *
      *****
*/
#include<stdio.h>
int main (){
    int n=5;
    for(int row=1;row<=n;row++){//outer loop for no.of rows.
        for (int col=1;col<=n;col++){//inner loop for no.of columns.
            if(row==1||row==n||col==1||col==n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}