#include<stdio.h>
int main(){
    typedef float real;
    real x=22;
    real y=7;
    real z = x/y;
    printf("%.20f",z);
    return 0;
}