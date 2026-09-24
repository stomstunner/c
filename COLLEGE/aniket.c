#include<stdio.h>
int main() {
int a=1,b=2,c=3;
int greatest = (a>b) ? (a>c ? a:c):(b>c ? b:c);
printf ("the greatest number is:%d\n",greatest);
return 0;
}