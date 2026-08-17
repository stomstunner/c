#include<stdio.h>
int main(){
    int base, area , height ; // variables decleration
    printf("Enter the base of the traingle : ");
    scanf("%d",&base); // storing inputs
    printf("Enter the height of the traingle : ");
    scanf("%d",&height);
    area = (base * height ) / 2 ; // initilization of area or the formula of area
    printf("The area of the triangle is : %d",area); // printing the area
    return 0;
}