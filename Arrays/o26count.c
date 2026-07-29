/*Count the number of element in given array greater than a given array */
#include<stdio.h>

int main(){
    int arr[7] = { 1,2,3,4,5,6,7};  // array initilization 
    int x = 4;  // number to compare
    int count = 0;  // counter for elements greater than 4
   for(int i=0; i<=6;i++){ // loop though each element in the array 
    if (arr[i]>x){  // chaek if the element is greater than 4
        count++; // increment the count
    }
   }
   printf("Number of elements greater than %d : %d\n",x,count);
    return 0;
}