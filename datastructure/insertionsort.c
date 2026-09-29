#include<stdio.h>
int main(){
    int arr[10] = {4,6,8,9,6,4,2,3,5,6};
    int n = 10;
    for(int i =0;i<n;i++){
        int j =i;
        while(j>=1){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else break;
            j--;
        }
    }
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}