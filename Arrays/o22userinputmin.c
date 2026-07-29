#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of your array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<=n-1;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;// this if the maximum value of an array for comoarision
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("the minimum value among all is : %d",min);

    return 0;
}