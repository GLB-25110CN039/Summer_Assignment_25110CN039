#include<stdio.h>
int main() {
    int num;
    printf("Enter the no. to reverse it : ");
    scanf("%d",&num);
    int r,rev = 0;
    while(num!=0){
        r = num%10;
        rev = (rev*10) + r;
        num = num/10;
    }
    printf("Reverse of given no. is %d",rev);
    return 0;
}