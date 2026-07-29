#include<stdio.h>
int main(){
    int n,product;
    printf("Enter the size of your array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter your %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    product=1;  ///stars from 1
    for(int i=0;i<n;i++){
        
        product = product * arr[i];
    
    }
        printf("%d",product);
    return 0;
}