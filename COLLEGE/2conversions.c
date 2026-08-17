#include<stdio.h>
int main(){
    float km,m,cm,inchs,feet;
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);
    m = km * 1000;
    cm = m * 100;
    inchs = m * 39.37;
    feet = m * 3.281;

    printf("Distance in meaters %f\n",m);
    printf("Distance in centimeter %f\n",cm);
    printf("Distance in inchs %f\n",inchs);
    printf("Distance in feets %f\n",feet);
    return 0;
}