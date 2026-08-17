#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,100,6,7};
    int x=100;
    for(int i = 0;i<=6;i++){
        if (arr[i]==x){
            printf("%d is present in the array and its index is  %d",x,i);
            break;                   // if the x wala element is present 2 or more times then is prits only
                                     // first wala elemrnt ad its index number 
                                         // if we remove the break statement then is print all the indexts whrew the x 
                                         //wala element is prent is it present 4 times then it prints all 4 indesxex

        }
    }
    return 0;
}