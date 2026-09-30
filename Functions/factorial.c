#include <stdio.h>
int factorial(int x){    // this is secondary function that is factorial 
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
 int n;
 printf("Enter a number : ");
 scanf("%d",&n);
 int a;
  a =factorial(n);
 printf("%d",a);
    return 0;
}
// {
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);
//     int r;
//     printf("Enter r: ");
//     scanf("%d", &r);
    // int nfact = 1;
    // int rfact = 1;
    // int nrfact = 1;
// niche wala and uper wala ko comment out karne ke baad hi ye chalega 
// FACTORIAL 
    // ye wale sab ko initilize karne ke liye  naya tarika 
            // int nfact= factorial(n);
            // int rfact= factorial(r);
            // int nrfact= factorial(n-r);

    // for (int i = 2; i <= n; i++)  //ye wala sab ka kaam uper secondary function me hi ho gaya hai
    // {
    //     nfact = nfact * i;
    // }
    // for (int i = 2; i <= r; i++)
    // {
    //     rfact = rfact * i;
    // }
    // for (int i = 2; i <= n - r; i++)
    // {
    //     nrfact = nrfact * i;
    // }
    // int ncr = nfact / (rfact * nrfact);
    // printf("%d", ncr);