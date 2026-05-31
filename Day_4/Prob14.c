#include<stdio.h>
int main() {
    int n,current;
    int previous_second=0;
    int previous_first=1;
    printf("Enter the term to find its fibonacci value :");
    scanf("%d",&n);
    if(n==1){
        current=previous_second;
    }else if(n==2){
        current=previous_first;
    }else{
        for(int i=0;i<n-2;i++){
            current=previous_second+previous_first;
            previous_second=previous_first;
            previous_first=current;
        }
    }
    printf("The required fibonacci value is %d ",current);
    return 0;
}