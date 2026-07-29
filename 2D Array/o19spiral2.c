#include<stdio.h>
int main(){
    int m;
    printf("Enter the dimensions of row : ");
    scanf("%d",&m);
    int n;
    printf("Enter the dimensions of coloumn : ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the elements of the array : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc =n-1;
    int tne =m*n;
    int count =0;
    while(count<tne){
        //printf the minimum row we have to start our first row from minc to maxc and the minr is constant and this type of thinking is is  foe  a ll th for loop 
        for(int j=minc;j<=maxc;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        //print the maximum coloumn
        for(int i =minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        // print the maximum row
        for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        //print the minmum coloum
        for(int i=maxr;i>=minr;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
        if(count>=tne) break;
    }
    return 0;
}