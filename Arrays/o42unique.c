#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[7]={1,2,3,4,1,2,3};
    for(int i=0;i<=6;i++){ 
        bool flag= false; // flag is false
        for(int j=i+1;j<=6;j++){ // j runs for i+1 ka index (for loop)
            if(arr[i]==arr[j]){ // i=j then flag=true
                flag=true;

            }
        }
        if(flag==false){ //in i wala for loop// flag is still false then 
            printf("%d",arr[i]); // print the arr[i],,i ka index wala element ka value print karo
            break; // brak for no more ittretion
        }
    }
    return 0;
}