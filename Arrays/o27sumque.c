/*
Find the diffrence between the sum of elements at even indices to the sum of elements at odd indices
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sumeven = 0, sumodd = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (i % 2 == 0)
        {
            sumeven = sumeven + arr[i]; // sumeven += arr[i];
        }
        else
        {
            sumodd += arr[i];
        }
    }
    printf("%d", sumeven - sumodd);
    return 0;
}