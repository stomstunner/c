/*
Find the second largest element int the given array
*/
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {7,6,5,4,3,2,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])  // run when max is less than arr [i]// eventually the max is int min (smallest possible number )
        {
            smax = max;   // smax is now the previous max  // s max store the previous max number thet int min 
            max = arr[i]; // max is now is a new max  // and the max is storrtig the arr[i]  that is the array ka elemrnt number index number 1...
        }
        else if (smax < arr[i] && max!arr[i])  // max > arr[i]  it is run when s max is less than arr of i and when max is  not equal to arry of i for preventing is the largrst number is written n times 
        {
            smax = arr[i];  // now thw s max is arr[i]
        }
    }
    printf("%d", smax);
    return 0;
}