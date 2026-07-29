/*

write a program to print the row number having the mazimum sum in a given maxtrix
*/
#include <stdio.h>
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int maxsum = 0;   // maxsum ka value store karega
    int maxindex = 0; // index with higest value ko store karega
    for (int i = 0; i < 3; i++)
    {
        int sum = 0; // loop ke bitch me sum 0 se strat hoga har column ke liye
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j]; // sum hoga har ek row ka
            if (maxsum < sum)
            {                 // aur jab maxsum(0) sum ka value se kam hoga tab
                maxsum = sum; // max sum ko sum ke equal kar do
                maxindex = i; // max index ka value i  hoga i ka index
            }
        }
    }
    printf("The row %d is the row number with highest whightage and %d is the total sum of row", maxindex, maxsum);
    return 0;
}