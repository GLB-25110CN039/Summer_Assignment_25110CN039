#include<stdio.h>
int main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);//size of array
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Element at index %d: ",i);
        scanf("%d",&arr[i]);//input elemnts of array
    }
    printf("Original array :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);//prints array 
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]<arr[j+1]){ 
            int temp=arr[j];//swap
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    printf("\nSorted array in descending order: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}