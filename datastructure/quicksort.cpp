#include<iostream>
using namespace std;
int partion(int arr[],int si, int ei){
    int pivotele = arr[si];
    int count =0;
    for(int i =si +1;i<=ei;i++){
        if(arr[i]<pivotele) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);
    int j = ei;
    int i =si;
    while(i<pivotIdx && j > pivotIdx){
        if(arr[i] <= pivotele) i++;
        if(arr[j] > pivotele  ) j--;
        else if(arr[i] > pivotele && arr[j] < pivotele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int partionIDX = partion(arr,si,ei);
    quicksort(arr,si,partionIDX-1);
    quicksort(arr,partionIDX+1,ei);
}
int main(){
    int arr[10] = {1,5,7,8,9,0,5,3,2,5};
    int n = 10;
    quicksort(arr,0,n-1);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}