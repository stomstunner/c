#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 100, 6, 7};
    int x = 100;  // for searching
    int check = 0; // 0 means the element is not present 
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == x)
        {
            check = 1; // i means the element present in the array
            break;
        }
    }
    if (check == 0)
    {
        printf("%d is not present in the array ",x);
    }
    else
    {
        printf("%d is present in the array",x);
    }
    return 0;
}