/*
Write a program to rotate the matrix to 90 degree
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of your row/coloumn : ");
    scanf("%d", &n);
    int arr[n][n]; // n*n ka array
    printf("Enter the elements of the %d X %d : ", n, n);
    // input liye hai user se
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    // transpose kar diye value ko
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n - 1; j++){ // for(int j=0;j<i;j++)
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\n");
    // print the transpose wala value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // rotate the matrix to 90 degree
    for (int i = 0; i < n; i++)
    {                  // tranpose wala vale ko ulata kar do row wise //
                       //  isliye row wlae for loop ke ander ham ek while loop laayegange jo ki row ke
                       //  1st element aur row ke last element ko swap kar dega 1st element ke liye ek
                       // naya variable and last element ke liye ek naya variable aue initial variable ka
                       //  value badhtre rahega aur last wlale variable ka value kam hote rahega
        int j = 0;     // pointing 1st elemne t
        int k = n - 1; // pointing last element
        while (j < k){ // alaways true // all of this run within a row and then the row number incerese
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++; // increment of j means row ka coloumn numnwer o se coloumn number 1
            k--; // decrement of k means 1st row ke cloloums number last se 1 kam
        }
    }
    printf("\n");
    // print the rotated array
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