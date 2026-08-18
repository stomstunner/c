#include<stdio.h>
int main(){
    int n,counrt =0;
    printf("Enter the size of your array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter the %d element ",i+1);
        scanf ("%d",&arr[i]);
    }
    int x;
    printf("Enter the number you want to find in the given element : ");
    scanf("%d",&x);
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
           counrt++;
        }
       else if (counrt != 1){
        printf("not found");
       }
    }
    if(counrt++){
        printf("%d is present in the given array  ",x);
    }
    return 0;
}