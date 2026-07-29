#include <stdio.h>
/*
1 2 3     7 2 9
4 5 6 ->  4 5 6
7 8 9     1 8 3
*/
int main()
{
    int n;
    printf("Enter the number of row of array : ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of coloumn of array : ");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    // wave printing
    
        for (int j = 0; j < m; j++)
        {
            if (j % 2 == 0)
            {
                for (int i = n - 1; i >= 0; i--)
                {
                    printf("%d ", a[i][j]);
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("%d ", a[i][j]);
                }
            }
            printf("\n");
        }
    
    return 0;
}