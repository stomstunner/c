#include<stdio.h>
int main(){
    int num[26],temp;
    num[0]=100;
    num[25]=200; //num[25] is a last element because the index of array starts from 0 to 25 sp 25 is for last element
    temp=num[25];  // temp is for swaping the values //temp = num[25]  ==temp=200
    num[25]=num[0];//num [25] = num[0] ==num [25]=100
    num[0]=temp; // num[0]= temp  ==num[0]==200
    printf("\n%d %d",num[0],num[25]);

        return 0;
}
