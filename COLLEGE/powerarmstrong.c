#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a* power(a,b-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int num=n;
    int count =0;
    while(num!=0){
        num=num/10;
        count++;
    }
    num=n;
    int ld=0;//last digit
    int result =0;
    while(num!=0){
        ld= num%10; // retain the last digit
        result = result + power(ld,count);
        num=num/10;
    }
    if(result==n) printf("%d is the armstrong number",n);
    else printf("%d is not a armstrong number",n);
    return 0;
}