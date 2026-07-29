/*
Find the second largest element int the given array
*/
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int max = INT_MIN;
    int smax =INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<=6;i++){
        if(arr[i]!=max && smax < arr[i]){  // after finding the largest element by the above loop ,,we are avoiding that maximum element and consider only second largest element
            smax = arr[i];
        }
    }    
    // this code is run for all type of array (2 baar wala loop)    
    printf("%d",smax); 
    return 0;
}