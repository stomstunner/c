#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[10] = {7,8,9,4,3,9,1,0,6,9};
    int n = 10;
    bool flag = false;
    for(int i =0;i<n-1;i++){
        flag = false;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
        }
        if(flag == false) break;

    }
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}