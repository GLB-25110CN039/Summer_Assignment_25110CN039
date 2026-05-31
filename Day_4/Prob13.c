#include<stdio.h>
int main() {
    int n,current;
    int previous_second=0;
    int previous_first=1;
    printf("Enter the range upto which you want to print Fibonacci series : ");
    scanf("%d",&n);
    //fibonacci series is sum of its two previous terms.It starts from 0 and 1
    printf("Fibonnacci series upto %d term is : ",n);
    printf("%d %d ",previous_second,previous_first);
    for(int i=0;i<n-2;i++){
        current=previous_first+previous_second;
        printf("%d ",current);
        previous_second=previous_first;
        previous_first=current;
    }
    return 0;
}