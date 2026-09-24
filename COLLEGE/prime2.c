#include<stdio.h>
int main(){
    int n,isprime=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<=1) {
        isprime = 0;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime==0) printf("Not prime");
    else printf("Prime");

    return 0;
}