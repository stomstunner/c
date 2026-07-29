/*
Given an array of marks of  10 students , if marks of any students is less than
{35} print its roll number [roll number here refers  to thr index of the array]

->> int marks[10] = { 95,90,31,25,100,50,15,89,97,30};
 index(roll number)    0, 1, 2, 3, 4, 5, 6, 7, 8, 9
output = 2
         3
         6
         9
*/
#include <stdio.h>
int main()
{
    int marks[10] = {95, 90, 31, 25, 100, 50, 15, 89, 97, 30};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}