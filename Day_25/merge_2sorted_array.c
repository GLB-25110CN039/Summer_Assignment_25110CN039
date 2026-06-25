#include<stdio.h>
void merge( int m,int arr1[m],int n,int arr2[n],int result[100]);//function prototype
int main(){
    int m,n,result[100];
    printf("Enter size of first sorted array: ");
    scanf("%d",&m);
    int arr1[m];
    for(int i=0;i<m;i++){
        printf("Element of first array at index %d is: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second sorted array: ");
    scanf("%d",&n);
    int arr2[n];
    for(int i=0;i<n;i++){
        printf("Element of second array at index %d is: ",i);
        scanf("%d",&arr2[i]);
}
merge(m,arr1,n,arr2,result);//function call
printf("Merged array: ");
for(int i=0;i<m+n;i++){
    printf("%d ",result[i]);
}
return 0;
}
void merge( int m,int arr1[m],int n,int arr2[n],int result[100]){
    int i=0,j=0,k=0;
    while(i<m&&j<n){
        if(arr1[i]<=arr2[j]){
            result[k]=arr1[i];//store smallest value in result array
            k++;
            i++;
        }
        else{
            result[k]=arr2[j];
            k++;
            j++;
        }
    }
    //for storing remaining elements in merged array
    while(i<m){
         result[k]=arr1[i];
            k++;
            i++;
}
while(j<n){
         result[k]=arr2[j];
            k++;
            j++;
    }
}