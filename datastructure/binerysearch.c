#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,94,100};

    int x = 94;
    int lo = 0;
    int hi = 9;
    bool flag = false;
   while(lo <= hi){
    int mid  = lo + (hi - lo)/2;
    if(arr[mid] == x ){
        flag = true;
        printf("The Number is present %d",arr[mid]);
        break;
    }
    else if(arr[mid] < x) lo = mid +1;
    else hi = mid - 1;
   }
   if(flag == false){
    printf("the number is not present");
   }
    return 0;
}