#include<stdio.h>
int main() {
    int num;
    printf("Enter a no. to find its largest prime factor :");
    scanf("%d",&num);
    int n=num;
    int max_prime=-1;
    while(n%2==0){
        max_prime=2;
        n=n/2;
    }
    for(int i=3;i*i<=n;i=i+2){
        while(n%i==0){
            max_prime=i;
            n=n/i;
        }
    }
    if(n>2){
        max_prime=n;
    }
    printf("The largest prime factor of given no. is %d",max_prime);
    return 0;
}