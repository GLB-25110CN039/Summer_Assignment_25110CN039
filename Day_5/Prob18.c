#include<stdio.h>
int main () {
    int x,y,a;
    int sum = 0,fact=1;
    printf("Enter a no. to check whether it is strong :");
    scanf("%d",&x);
    //STRONG NO. is obtained by sum of factorial of its digits
    y=x;                           ;
    while(y!=0){
    a=y%10;
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    sum = sum+fact;
    fact=1;
    y=y/10;
}
    if(sum==x){
        printf("Entered no. is a strong no.");
    }else{
        printf("Number is not strong no.");
    }
    return 0;
}