#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {12,33,55,77,43,89,90};
    int x = 33;// the number we want to search
    int idx =1;// just a variable is storing for the index
    bool flag = false ;// bool is a type of data type that store only 
    //two thing 1st one is true and second thing is flase;
    //HERE the flase means the number is not present and the true means the number is present
    for (int i=0;i<=6;i++){ // this is just a simple for loop that runs from 0 to the n-1 
        if (arr[i]==x){ // this if statement is works only when the arr[i ] == x that the number we want to search
        flag=true; // if the IF statement is true then we keep the value of flag change to flase to true
        idx=i;// it store the value of the i ,, that is the index of number that is present
        break; // then break
        }
    }
    if (flag == false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and its index is %d",x,idx);
    }
    return 0;
}
//bool is data type