#include<stdio.h>
int main(){
    int avg, sum =0 , i;
    int marks[30];
    for(i=0;i<=29;i++){
        int a = i+1;
        printf("Enter marks of %d: ",a);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=29;i++)
    sum = sum + marks[i];
    avg = sum /30;
    printf("Average marks = %d\n",avg);
    return 0;

}