#include<stdio.h>
int main(){
    int n,i;
    printf("Enter your size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++) {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0]; // comarision from very first elemnt // true for all calses +ve as weell as -ve
    for(i=0;i<=n-1;i++){
        if(max<arr[i]){
            max= arr[i];
        }
    }
    printf("%d",max);
    return 0;
}