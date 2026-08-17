#include<stdio.h>
int main(){
    int a,b; //a>b
    printf("Enter Divident : ");
    scanf("%d",&a);
    printf("Enter Divisor : ");
    scanf("%d",&b);
    int q = a/b;
    int r = a - b*q; //divisor*quotient+remainder=divident
    printf("The remainder when %d is devided by %d is : %d",a,b,r);
    return 0;
}