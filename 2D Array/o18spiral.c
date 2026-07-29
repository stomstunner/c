#include <stdio.h>
/*
1 2 3     1 2 3 6 9 8 7 4 5
4 5 6 ->
7 8 9
*/
int main()
{
    int m;
    printf("Enter the number of row of array : ");
    scanf("%d", &m);
    int n;
    printf("Enter the number of coloumn of array : ");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = m * n;
    int count = 0;
    while (count < tne)
    {
        // print the minium row
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        if (count <= tne)
            break;

        // print the max coumn
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        if (count <= tne)
            break;

        // print the maxiumn row
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        if (count <= tne)
            break;

        // print thr min colum;
        for (int i = maxr; i >= minr; i--) 
        {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
        if (count <= tne)
            break;
    }
    return 0;
}