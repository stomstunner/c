#include<stdio.h>
int main(){
    int arr[7]= {1,2,3,4,5,6,7}; 
    int brr[7];  // making a new variable for printing that first arry in reverse order 
    for (int i= 0;i<=6;i++){  // simple for loop that is array
        brr[i]=arr[6-i]; // brr[i] = arr[ (n-1) - i]   // here the second array is storing the element of array in reverse orders because the loop ka fist element array ke 2nd last element me se minus ho ja raha hai

    }
    for(int i=0; i<= 6;i++){
        printf("%d ",brr[i]);  // simpliy print the  all elemnt of 2nd array in a for loop
    }
    return 0;
}
