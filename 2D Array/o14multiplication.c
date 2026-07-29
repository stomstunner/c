#include<stdio.h>
int main(){
    // 1 2
    // 3 4 
    // 5 6
    int a[3][2] ={{1,2},{3,4},{5,6}}; // first array
    // 1 2 3 4 
    // 5 6 7 8
    int b[2][4] ={{1,2,3,4},{5,6,7,8}}; // second array
    int res[3][4];                               // resultant array // size of first array ka  row and second array ka coloumn
    int cr=2;                                  // this is a new variable indecating that the coloumn of first array and row of 2nd array
                                              // ,,,, that is the same and the operation is performing 
                                             //....multiplication wala loop ka aukat isseke itna hi hoga 
    for(int i=0;i<3;i++){                   // this is for the travesing  of row  
        for(int j=0;j<4;j++){              // this is for the coloumn
                    res[i][j]=0;                 // and this is the resulatant array which is in the i wale and the j
                                                // wale ...isse hoga kya ki firstly ress ka value 0 ho jaye ..
                                                //.jisse usme value store ho sake
            for(int k=0;k<cr;k++){               // this is the loop where the all task perform and tis is ittrate only the value of  cr
                res[i][j] += a[i][k]*b[k][j];   //res[i][j]= res[i][j]+a[i][k]*b[k][j]  
                                                // res ka pahale se value 0 hai  so first time me tho usme value store hogi
                                                // jo ki a aur b ko multiply karne se aayegai
                                                // a[i] same rahega because woh row hai jo ki multiply hote time same rehta
                                                // hai but coloum badlate ragtea hai and 1st row ka coloum is eqal to 2nd ka 
                                                //row  to jab b ka row hoga toh woh badalte rahega and uska coloumn same
                                                // rahega which is [j]
                                                // k badlte rahega o,1,2
            }
        }
    }
    // just printng the  resulatant array
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}