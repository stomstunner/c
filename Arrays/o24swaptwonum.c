#include<stdio.h> //here pass by the refrence,, this function change our array
void fun(int x[]){
    int temp = x[0];
    x[0] = x [1];
    x[1] = temp;
    return ;
}
int main(){
    int arr[2] ={2,9};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}