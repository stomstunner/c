/*
find the total numbers of pairs in the array whose sum is equal to the given value of x.
arr { 1,2,3,4,5,6,7,8}
      int x = 12 so the sum of any two digit are 12 aur jitne pair banenge usse batana hai
      pair = 2,  (4,8) ,, (5,7)
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int x;
    printf("Enter the number final number  : ");
    scanf("%d", &x);
    int totalpairs = 0;

    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpairs++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("%d", totalpairs);
    return 0;
}