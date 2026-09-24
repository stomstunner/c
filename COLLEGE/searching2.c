#include<stdio.h>
int main(){
    int arr[10] = {1,3,4,5,6,7,8,10,23,45};
    int x;
    printf("Enter the number that you want to search : \n");
    scanf("%d",&x);
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        if(arr[i] == x){
            printf("The element %d is present \n And the position is %d",x, i+1);
            break;
        }
    }
    return 0;
}