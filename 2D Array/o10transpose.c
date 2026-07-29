/*
Write a program to print the transpose the matrix entered by the user (leet code 867)

   0  1  2 // index of coloum           0  1
0  1  2  3                    --->   0  1  4    // transpose of matrix
1  4  5  6                           1  2  5
                                     2  3  6

*/

#include<stdio.h>

int  main(){
    int r;
    printf("Enter The size of the row : ");
    scanf("%d",&r);
    int c;
    printf("Enter the size of the columns : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the %d X %d array : ",r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<c;i++){ // c=3 r=2
        for(int j=0;j<r;j++){ //r=2
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}