/*
write a function to compute the greatest common divisior of two given number
a,b
GCD -> HCF higest common factor
12 --> 1,2,3,4,6,12
24 --> 1,2,3,4,5,6,10,12,15,20,30,60
common factor --> 1,2,3,4,6,12
higest common factor --> 12 ( hcf is cannot be greater than the smallest given number )
*/
#include <stdio.h>
int min(int a, int b)  // 8
{
    if (a < b)  //9
        return a;  //10
    else
        return b;  //11
}
int gcd(int a, int b) //6
{
    int hcf;
    // for (int i = 1; i <= min(a, b); i++)
    for(int i=min(a,b); i>=1;i--) //7  // ulta loop chal raha hai pahale  min hai dono number ka usses start ho raha hai   aur 1 tak jaa raha ahai 1 decremeent 
    {
        if (a % i == 0 && b % i == 0) // 12
        {
            hcf = i; //13
            break;//  14
        }
    }
    return hcf; //15
   
}
int main()
{
    int a;
    printf("Enter 1st number  : ");//1
    scanf("%d", &a);  //2
    int b;
    printf("Enter 2nd number  : ");//3
    scanf("%d", &b); //4
    int hcf = gcd(a, b);//5
    printf("The  HCF/GCD of %d and %d is : %d", a, b, hcf); //16
    return 0;
}