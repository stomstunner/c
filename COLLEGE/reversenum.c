#include<stdio.h>
int main(){
  int n,count=0,sum=0,ld=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    while(n!=0){
    ld =n%10;
        sum = sum* 10 +ld;
        n=n/10;
        count+1;

    }
    printf("%d %d",count,sum);
    return 0;
}