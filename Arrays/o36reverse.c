//reverse part of the array
/*      0,1,2,3,4,5,6 
arr[] ={1,2,3,4,5,6,7} then reverse the middle part like 
            -------
arr[]= { 1,2,6,5,4,3,7}
now our first element will me start from to perform reverse wala code is i = 2 ,j = 5
*/
#include<stdio.h>
void reverse (int arr[]){
    for(int i =2,j=5;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
int arr[7] = {1,2,3,4,5,6,7};
 reverse(arr);
for(int i=0;i<=6;i++){
    printf("%d ",arr[i]);
    
}
return 0;
}