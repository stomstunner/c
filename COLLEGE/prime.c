// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             printf("%d is a not a prime number ");

//         }
//         else{
//             printf("%d ia s prime number ");

//         }
//         if(n=1 || n==2 ){
//             printf("%d is a prime number");
//         }
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0; // If divisible, mark as not prime
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
