#include<stdio.h>
int main(){
    int arr[7]={1,2,7,4,5,6,7};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){ // j start with i+1 beacuse it ignore the previous i ka value for the present value of i
            if(arr[i]==arr[j]){
                printf("%d is the dublicate in the array",arr[i]);
                break;
            }
        }
    }
    return 0;
}