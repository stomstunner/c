#include<stdio.h>
int main(){
    int r;
    printf("Enter the size of row : ");
    scanf("%d",&r);
    int c;
    printf("Enter the size of coloumns : ");
    scanf("%d",&c);
    printf("Enter your elements of the %d X %d arrar : ",r,c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i]; // main formula ulata palti // naye wale array ka elements is equal to purane wale ka coloumn and row
        }
    }
    //printimg the brr
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}