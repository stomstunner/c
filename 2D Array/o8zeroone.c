#include<stdio.h>
int main(){
    int arr[3][4]={{0,1,1,0},{1,1,0,0},{1,1,1,1}};
    int maxcount=0; //1 ka count ko store karega
    int maxindex=0; // max row number with max 1 ko store karega
    for(int i=0;i<3;i++){
        int count = 0; //  loop ke bitch me woh count =0 jo ki array ke element 1 hone pe uska value badha denge
        for(int j=0;j<4;j++){
            if(arr[i][j]==1){
               count++; // count ka value baha denge row ke element badhmne per
            }
            if(maxcount<count){ // if max count (0) ager count(kuch toh value hoga hi ) isse chota hai hot max me count ka total value rakh do 
                maxcount=count;
                maxindex=i; // aur max index me i ka valuye rakh do kyuki max count usi
                // me hai jis row me 1s sabse jayda hai aur row ko hi isme store karna hai
                // fir usse preint arna hai
            }
        }
    }
    printf("%d is the total number of 1s in a %d row",maxcount,maxindex);
    return 0;
}