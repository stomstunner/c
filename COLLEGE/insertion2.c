#include<stdio.h>
int main(){
    int arr[10] ={ 1,2,3,4,5};
    int n=5,pos=2,insert=6;
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]= insert;
    n++;
    for(int i =0;i<n;i++){
        printf("\n %d ",arr[i]);
    }
    return 0;
}