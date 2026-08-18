#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int x = power(a,b/2);
    if (b%2==0) return x*x;
    
    else return x*x*a;
}
int main(){
    int a;
    printf("Enter the base of your number : ");
    scanf("%d",&a);
    int b;
    printf("Enter the exponents of your number : ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;

}