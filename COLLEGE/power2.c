#include<stdio.h>
int power(int a, int b){
    int x=1;
    for(int i=1;i<=b;i++){
        x=x*a;
    }
    return x;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int m;
    printf("Enter the exponents : ");
    scanf("%d",&m);
    printf("%d",power(n,m));
    return 0;
}