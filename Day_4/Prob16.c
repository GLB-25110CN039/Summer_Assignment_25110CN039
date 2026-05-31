#include<stdio.h>
#include<math.h>
int main() {
    int n1,n2,x,y,n,t,s,temp;
    printf("Enter a range to print armstrong no. :");
    scanf("%d%d ",&n1,&n2);
    for(x=n1;x<=n2;x++){
        n=0;
        s=0;
        temp=x;
    while(temp!=0) {
        temp = temp/10;
        n++;
    }
    y = x;
    while(y!=0){
        t = y % 10;
        s = s + pow(t,n);
        y = y/10;
    }
    if(x==s){
        printf("%d ",x);
    }
}
return 0;
}