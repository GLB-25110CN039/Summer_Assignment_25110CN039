#include<stdio.h>
int main() {
    int num,n1,n2,i;
    printf("Enter the range between which prime no. to be printed: ");
    scanf("%d%d",&n1,&n2);
    printf("Prime no. between %d and %d are : ",n1,n2);
    for(num=n1;num<=n2;num++){
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
}
    if(i==num){
        printf("%d ",num);
    }
}
    return 0;
}