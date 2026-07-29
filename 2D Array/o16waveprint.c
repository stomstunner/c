#include<stdio.h>
/*
1 2 3    1 2 3
4 5 6 -> 6 5 4
7 8 9    7 8 9
*/
int main(){
    int n;
    printf("Enter the number of row of array : ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of coloumn of array : ");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    //wave printing
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int j=m-1;j>=0;j--){ // this is for the reverse of the perticular row(even index wala row)
                printf("%d ",a[i][j]);
            }
        }
       printf("\n"); 
    }
    return 0;
}