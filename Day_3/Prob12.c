#include<stdio.h>
int main (){
    int n1,n2,i;
    printf("Enter two numbers whose LCM is to find :");
    //LCM of two no. is the least factor common to both no.
    scanf("%d%d",&n1,&n2);
    for(i=n1>n2?n1:n2;i<=n1*n2;i++){
        if((i%n1)==0 && (i%n2==0)){
            printf("LCM is %d ",i);
            break;
        }
    }
    return 0;
}