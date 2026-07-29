#include<stdio.h>
int main(){
    int arr[7] = { 32 ,45,65,12,10,100,200}, even;  //index{0,1,2,3,4,5,6}
    for(int i=0;i<=6;i++){
        if(i%2!=0){
            arr[i]= arr[i] * 2;   //arr[i]*=2;
        }
            else {
                arr[i]= arr[i]+10;  //arr[i]+=10;
            }
    }
    for( int i = 0; i<=6;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
/*
Que: Given an array of integers, 
change the value of all odd indexed elements to its second multiple 
and increment all even indexed value by 10.

arr { 32 ,45,65,12,10,100,200}
index  0,  1, 2, 3 , 4, 5,  6  ==odd wale index ke value ko 2 se multiply 
                               ==and even wale index pe 10 ka plus
*/