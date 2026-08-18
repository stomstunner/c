#include<stdio.h>
int main(){
    int n;
    printf("Enter the number that you want to print in the form of diamond : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // ye loop hai row ke liye aur 
                          // all these three loop is for ki hamara upper side of the diamond print ho jaye with sapce or// equavatral traiangle
        for(int j=1;j<=n-i;j++){// the current loop is runs from j=1, to j<=n-i.. 
                               //matlab ki jitna bhi n ka value hoga usse current i ka wala term subtract kar
                              // denge utna hi time hamra j (space wala loop chalega)
            printf(" "); 
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");     // this is the second nested loop runs  afer the space prints in each line
                            // ... the logic of the condition for k is  .it depends upon the row number 
                           //the star in each row is equal to 2times of the row number - 1 ; 
        }
    printf("\n");       // for next line / enter after each line prints
    }
    // lower part of the diamond
    for(int i=n-1;i>=1;i--){ // this loop starts from the n-1 term means user ne jitna input diya hai usse 1 kam se start hoga
                            // aur 1 ke equal aur usse bare number ke liye chalta rahega 
                            // also for the lower part of the diamond the loop runs when the i ka value is decreassing 
         for(int j=1;j<=n-i;j++){ // baki sab same rahega ..like the code of the upper part of the diamond
            printf(" "); 
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");     
        }
         printf("\n"); 
    }
    
    return 0;
}