#include<stdio.h>
int main() {
    int num;
    printf("Enter the no.to find product of its digits : ");
    scanf("%d",&num);
    int product=1;
    while(num!=0){
        product = product*(num%10);
        num = num/10;
    }
    printf("Product of digits of given no. is %d",product);
    return 0;
}