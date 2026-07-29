#include<stdio.h> // updation of array
int main(){
    int arr[5] ={ 1,2,3,4,5}; // this is like we decleare our arrays
    arr[4] = 100; // by this line the value of the array store in array 4 location change to 100,,
    //5 change to 100 {1,2,3,4,100}
    arr[3]=200; //4 changes to 200 {1,2,3,200,100}
    printf("%d",arr[3]);
    return 0;
}