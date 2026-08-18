#include<stdio.h>
// only for the odd number
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    int nsp=n/2; //number of spaces
    int nst=1; // number of stars
    int ml = n/2+1; //middle line 
    for(int i=1;i<=n;i++){ // loop for the row  // 0 to n
        for(int j=1;j<=nsp;j++){ // loop for spaces  // 1 to number of spaces
            printf(" "); // printing blank spaces
        }
        for(int k=1;k<=nst;k++){ // loop for stars  // 1 to number of spaces
            printf("*"); // printing the stars
        }
        if(i<ml){  // if our row wala loop is lesser than the middle line , then run the code
            nsp--; // decrement for the nsp
            nst+=2; // and increment of 2 for the nst
        }
        else{  // if our i is grester or equal than the middle linr then
            nsp++; // increment of nsp
            nst-=2; // and decrement of 2 for the nst
        }
        printf("\n"); // enter a line after every line(row) is printing
    }
    return 0;
}