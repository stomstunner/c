#include<stdio.h>
int main(){
    int a=10;
    int* x= &a; 
    printf("%p",*x);
    return 0;
}