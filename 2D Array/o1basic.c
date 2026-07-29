#include<stdio.h>
int main(){
    // int arr[2][2]; // 2D array deleration
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    //   1 2
    //   3 4
    // 2D array inillition
    int arr[2][2]={{1,2},{3,4}}; // decleration // same as above
    for(int i =0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
    return 0;
}