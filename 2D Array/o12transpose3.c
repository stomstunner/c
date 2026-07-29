/*
Write a program to change the given (n X n) matrix to its transpose
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of your row/coloumn : ");
    scanf("%d", &n);
    int arr[n][n]; // n*n ka array
    printf("Enter the elements of the %d X %d : ", n, n);
    // input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        { // for(int j=0;j<i;j++)
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}