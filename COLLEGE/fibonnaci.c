#include<stdio.h>
int main(){
    int n,a,b,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=1;
    b=1;
    sum =1;
    for(int i=1;i<n-1;i++){
        sum=a+b;
        a=b;
        b=sum;
        
    }
    printf("the fibbonalci series of the %d is the %d ",n,sum);
    return 0;
}