/*
let us c solution(array) page no. 197
Que. Twenty - five numbers are entered from the keyboard
*/

#include <stdio.h>
int main()
{
    int num[25], i, neg = 0, pos = 0, odd = 0, even = 0;
    printf("Enter 25 element of array");
    for (i = 0; i <= 24; i++)
    {
        scanf("%d", % num[i]);
    }
    for (i = 0; i <= 24; i++)
    {
        num[i] < 0 ? neg++;
        (pos++);
        num[i] % 2 ? odd++;
        (even);
    }
    printf("Negative element = %d\n", neg);
    printf("Negative element = %d\n", pos);
    printf("Negative element = %d\n", even);
    printf("Negative element = %d\n", odd);
    return 0;
}