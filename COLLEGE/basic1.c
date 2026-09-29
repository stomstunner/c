#include <stdio.h>
#include <conio.h>
/*
this program is for area of circle
date: 05/09/2024
name: Ujjwal kumar
roll.no: 1324547
*/
int main()
{
    float radius, area;
    clrscr();
    printf("Enter your radius : ");
    scanf("%f", &radius);
    area = (22 * radius * radius) / 7;
    printf("%f", area);
    getch();
    return 1;
}