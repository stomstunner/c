#include<stdio.h>
#include<conio.h>
int main(){
    float radius,area;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    area=( 22 * radius * radius)/7;
    printf("%f",area);

    return 0;
}