#include<stdio.h>
int main ( ){
    int size = 10,b[size];  // it  is like ki int x = 5, y;  or int x=5, y =4; 
    //or int size =10, b[10]; size = 10  // int in array [size] should be only integer
    b[0]=2;  // it is just for realization of  b array me 10 values hai aur
    // b ka 0th index = 2 hai toh ham agle line usse print karwa lenge
    printf("%d",b[0]);  // print karo b array ki index number 0 ki value that is 2
    return 0;
}