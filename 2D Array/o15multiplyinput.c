#include<stdio.h>
int main(){
    //1st matrix order
    int m;
    printf("Enter the number of rows of first matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of coloumn of first matrix : ");
    scanf("%d",&n);
    // input of 1st matrix
    int a[m][n];
    printf("Enter the elements of the first matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // 2nd matrix order 
    int p;
    printf("Enter the number of rows of second matrix : ");
    scanf("%d",&p);
    int q;
    printf("Enter the number of coloumn of second matrix : ");
    scanf("%d",&q);
    // input of 2nd matrix
    int b[p][q];
    printf("Enter the elements of the second matrix : ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //check
    if(n!=p){
        printf("The matrices cannot be multiplied");
    }
    else{
        //multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                // i row of a[][] and j coloumn of b[][]
                 for(int k=0;k<n;k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // print the resulatant
        printf("The resultant Matrix is : \n");
         for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}