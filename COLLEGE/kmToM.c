#include <stdio.h>
int main()
{
    int km, m; // km = kilometer , m = meter
    printf("Enter your number that you want to convert from kilometer to meter : ");
    scanf("%d",&km);
    m = km * 1000; // meter = kilometer * 1000
    printf("The %d kilometer in meters is : %d ", km,m);

    return 0;
}