#include<stdio.h>
int main(){
    float principal, rate, time, simple_intrest;
    printf("Enter Principal : ");
    scanf("%f",&principal);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    printf("Enter Time in Years : ");
    scanf("%f",&time);
    simple_intrest = (principal * rate * time)/100;
    printf("Your simple intrest is : %f",simple_intrest);
    return 0 ;
}