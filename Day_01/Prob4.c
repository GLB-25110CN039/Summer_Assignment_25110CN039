#include<stdio.h>
int main(){
    int num;
    printf("Enter a no. to count its digits : ");
    scanf("%d",&num);
    int count = 0;
    while(num!=0){
       num = num/10;
       count++;

    }
printf("Number of digits in given no. is %d",count);
    return 0;
}