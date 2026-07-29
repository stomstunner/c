#include<stdio.h>
#include<stdlib.h>
int main(){
    int n =5;
    int* ptr;
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr == NULL){
        printf("The Memory is not initilized");
    }
    for(int i =0;i<n;i++){

        printf("Value %d ",ptr[i+1]);
    }
    return 0;
}