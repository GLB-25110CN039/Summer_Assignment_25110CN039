#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. to print its table : ");
    scanf("%d",&n);
    printf("Multiplication table of %d is",n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d \n",n,i,n*i);
        }
    
    return 0;
}