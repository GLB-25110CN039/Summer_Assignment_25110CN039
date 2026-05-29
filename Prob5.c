#include<stdio.h>
int main() {
    int num;
    printf("Enter the no.to find sum of its digits : ");
    scanf("%d",&num);
    int sum = 0;
    while(num!=0){
        sum = sum + num%10;
        num=num/10;
    }
    
    printf("Sum of digits of no. is : %d",sum);
    return 0;
}