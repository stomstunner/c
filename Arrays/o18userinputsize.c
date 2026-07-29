#include<stdio.h>
int main(){
    int n;      //decleare a varible and data type
    printf("Enter the size of your array : ");   //print this entiti
    scanf("%d",&n);  // taking input from user 
    int arr[n];   // declear the array  // and put the input value in it as the size of an array
    for(int i=0;i<=n-1;i++){    //normal for loop for array but catch is the loop is running from 0 to n-1
        int a = i+1;  // this is just for the printf funtion to write the Nth element and increment as the for loops runs
        printf("Enter the %d element : ",a);
        scanf("%d",&arr[i]);   // store the array elemnt taking from user
    }
    for(int i=0;i<=n-1;i++){   // after decler the size of an array the loops utna hi time
        printf("%d ",arr[i]);  // simply print the input as a output
    }

    return 0;
}