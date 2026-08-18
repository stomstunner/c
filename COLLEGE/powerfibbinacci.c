#include<stdio.h>
int main(){
    int n;
    int m;
    printf("Enter the base of the number : ");
    scanf("%d",&n);
    printf("Enter the exponents of the  number : ");
    scanf("%d",&m);;
    int result =1;
    for(int i=0;i<m;i++){
        result = result*n;
    }
    printf("The reslut of %d raised to the power %d is : %d",n,m,result);
    printf("Enter the number where you want to stop : ");
    scanf("%d",&n);
    int a =0,b=1,sum=1;
    if(n>=0) printf("%d ",a);
    if(n>=1) printf("%d ",b);
    sum = a+b;
    while(sum<=n){
       printf("%d ",sum);
        a=b;
        b= sum;
        sum= a+b;

    }
    return 0;
}