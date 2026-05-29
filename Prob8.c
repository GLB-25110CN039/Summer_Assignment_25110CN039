#include<stdio.h>
int main() {
    int num,n;
    printf("Enter a no. to check whether it is palindrome or not : ");
    scanf("%d",&num);
    n=num;
    int rev=0;
    while(num!=0){
        rev = (rev*10) + (num%10);
        num = num/10;
    }
    if(n==rev){
        printf("Entered number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
    return 0;
}