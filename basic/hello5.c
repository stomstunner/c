#include<stdio.h>
int main(){
    float n,m,sum;
    printf("Enter a number : ");
    scanf("%f",&n);
    printf("Enter 2nd number : ");
    scanf("%f",&m);//scanf function 
    sum=n/m;
    printf("%f",sum);
    return 0;
}