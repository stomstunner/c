#include<stdio.h>
int main(){
    int arr[5];
    for (int i=0; i<=4; i++){
        int a= i+1;
        printf("Enter element number %d\n",a);
        scanf("%d",&arr[i]);

    }
    for(int i=4; i>=0; i--){ // the simple change is that we change the for loop inilization
    //  and condition and updation we just reversee the for loop ,, 
    //  here the codee inilize from last digit and condition is that the code
    //   end at 0 and then we decrement the value of i after every time the
    //    the loop of code ends
        printf("%d ",arr[i]);
    }
    return 0;
}