#include<stdio.h>
#include<math.h>
int main() {
    int x,y,n=0,t,s=0;
    printf("Enter the no.to check whether it is armstrong :");
    scanf("%d",x);
    int temp = x;
    while(temp!=0) {
        temp = temp/10;
        n++;
    }
    y = x;
    //Armstrong no.is sum of its digits such that each digit is raised to power of total no. of digits
    while(y!=0){
        t = y % 10;
        s = s + pow(t,n);
        y = y/10;
    }
    if(x==s){
        printf("Entered no. is Armstrong");
    }else{
        printf("No. is not armstrong no.");
    }
    return 0;
}