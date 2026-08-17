#include<stdio.h>  // header file

int main(){ // main function
    float x,y,sum; // float that store real numbers  //
    // y , x , sum are the name of variable that store float number 
    printf("Enter First number : ");  //printf function
    scanf("%f",&x);  // scanf function for taking the input from user and store the number in itself
    printf("Enter Second number : ");
    scanf("%f",&y);
    sum = x+y;  // it just a simple expression for sum that add the variable / 
    //or the value of x and y // and store in the variable sum
    printf("The sum of the number that you gave is : %f",sum);  //  the value of sum is 
    // int x = 5;
    // int y = 6;
    // int sum = x + y;
    // printf("%d",sum);

    return 0;
}