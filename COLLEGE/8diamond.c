#include <stdio.h>
int main()
{
    // int row;
    // printf("Enter the row number : ");
    // scanf("%d",&row);
    // for(int i=1;i<=row;i++){
    //     for( int k=1;k<=row-i;k++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=(2*i-1);j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=row-1;i>=1;i--){
    //     for(int k=1;k<=row-i;k++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=(2*i-1);j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    int row;
    printf("Enter the row number : ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= row - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = row - 1; i >= 1; i--)
    {
        for (int k = 1; k <= row - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}