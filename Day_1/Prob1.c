#include<stdio.h>
int main(){
    int N;
    printf("Enter the natural no. upto which you want to print the sum : ");
    //natural no. starts from 1 not from 0 so, value of N must start from 1
    scanf("%d",&N);
    int sum = 0;
    for(int i=1 ;i<=N;i++ ){
        sum = sum + i;
    }
    printf("Sum of first N natural numbers is : %d",sum);
    return 0;

}