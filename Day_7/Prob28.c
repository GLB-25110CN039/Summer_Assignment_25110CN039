#include<stdio.h>
int reverse(int);
int main() {
    int n,rev;
    printf("Enter a number :");
    //PROGRAM:to reverse a number using recursion.
    scanf("%d",&n);
    rev=reverse(n);
    printf("Reverse of %d is %d",n,rev);
    return 0;
}
int reverse(int n){
    static int rev=0;
    int rem;
    if(n>0){
        rem=n%10;
        rev = rev*10+rem;
        return reverse(n/10);
    }
    else{
        return rev;
    }
}