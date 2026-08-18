#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int arr[],int n ){
    
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    int x;
    
    printf("Enter the number that you want to search : \n");
    scanf("%d",&x);
    sort(arr,n);
    while(lo<=hi){
        int mid = lo + (hi -lo) / 2;
        if(arr[mid ] ==  x  ) {
            printf("The element is present\n And the position is %d",mid+1);
            return 0;
        }
        else if(arr[mid] < x) lo = mid+1;
        else hi = mid -1;
    }
    printf("The element is not present");
    return 0;
}