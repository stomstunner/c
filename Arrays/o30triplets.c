#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int x;
    printf("Enter the number final number  : ");
    scanf("%d", &x);
    int totaltriplets = 0;

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
            for (int k = j + 1; k <= n - 1; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    totaltriplets++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d", totaltriplets);
    return 0;
}