#include<stdio.h>
int main(){
    int i,a=2,b=3; //initilization
    int arr[ 2+ 3];  //this is nothing but arr[5]
    for(i=0;i<a+b;i++){   //i stsrts from 0 to 4 index) i ka increment
        scanf("%d",&arr[i]);  // store the vallue or take input from user 
        printf("\n%d",arr[i]); // perint the same value we enter in it till 5  ittration
    } 
    return 0 ;
}