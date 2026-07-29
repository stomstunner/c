#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {                                           // the for loop runs from 0 to 4 (means there are 5 elements)
        int a = i + 1;                          // this is for the
        printf("Enter Element Number %d\n", a); // here a is the element number that is starts from 1 and increase according to the for loop's (i)
        scanf("%d", &arr[i]);                   // this simple for loop is for taking the inputs from user multiple time to be specific 5 times beacuse the for loop runs 0 to 4
    }
    for (int i = 0; i <= 4; i++)                // this for loop is for the printing whole element 
    {
        printf("%d ", arr[i]);                  // prints the value of i that the user give to the code  // this prints the value of array 1 means this asign the 2nd element of array
    }
                           
    return 0;
}