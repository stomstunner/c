#include<stdio.h>
int main(){
    float x;
    printf("Enter your decimal number : ");
    scanf("%f",&x);
    int y ;
    y = x;
    float z = x - y;
    printf("The Fractional Part of the number is : %f",z);
    return 0;

}