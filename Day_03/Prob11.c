#include<stdio.h>
int main() {
    int n1,n2,i;
    printf("Enter two no. whose GCD is to find :");
    scanf("%d%d",&n1,&n2);
    //GCD or HCF of 2 no. is highest factor common to both
    for(i=n1<n2?n1:n2;i>0;i--){
        if(n1%i==0 && n2%i==0){
            printf("GCD is %d ",i);
            break;
        }
    }

    return 0;
}