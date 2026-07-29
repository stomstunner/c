#include<stdio.h>
int main(){
    int r;
    printf("Enter the size of row : ");
    scanf("%d",&r);
    int c;
    printf("Enter the size of columns : ");
    scanf("%d",&c);
    printf("Enter the elements of %d X %d array : ",r,c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int max=arr[0][0];
    int maxrow=0;
    int maxcol=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                maxrow=i;
                maxcol=j;   

            }

        }
    }
    printf("The element with maximum value is %d and their position is %d,%d",max,maxrow,maxcol);
    return 0;
}