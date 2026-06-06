#include<stdio.h>
int main() {
    int num,i;
    printf("Enter a number to check whether it is prime : ");
    //Prime no. is divisible by 1 and itself i.e.it has only two factors 
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("Entered no. is not prime");
            break;
        }
}
    if(num==i){
        printf("Entered number is prime");
    }
    return 0;
}