#include<stdio.h>
int main(){
    int a=10,b=20,c=30;
    int gratest;
    gratest = (a>b)?((a>c)?a:c) : ((b>c)?b:c);
    printf("%d",gratest);
    return 0;

}