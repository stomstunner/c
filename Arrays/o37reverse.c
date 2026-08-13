#include<stdio.h>
void reverse( int arr[], int si, int ei){ // si= starting index catch number from main funtion calling funtion and ei= ending index ..
    for (int i = si,j=ei;i<j;i++,j--){
        int temp = arr [i];
        arr[i]= arr[j];
        arr[j]=temp;
        
    }
    return;
}
int main(){
    int arr[7] = { 1, 2 ,3 ,4 ,5 ,6 ,7};
    reverse(arr,3,5); // means reverse the array by calling the reverse funtion to 0 to 5
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}