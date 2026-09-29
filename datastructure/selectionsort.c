#include<stdio.h>
int main(){
    int arr[10] = {1,4,6,8,9,5,3,2,6,0};
    int n = 10;
    int minIdx;
    for(int i =0;i<n-1;i++){
        minIdx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}