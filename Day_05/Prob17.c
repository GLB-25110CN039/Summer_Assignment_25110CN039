#include<stdio.h>
int main() {
    int num,s=0;
    printf("Enter a no. to check whether it is perfect :");
    scanf("%d",&num);
    //perfect no. is obtained by adding its all factors except itself  
    for(int i=1;i<num;i++){
        if(num%i==0){
            s = s + i;
        }
    }
    if(s==num){
         printf("Entered no. is perfect no.");
    }
    else{
        printf("Number is not perfect");
    }
    return 0;
}