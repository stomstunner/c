#include <stdio.h>
int main()
{
    int r;
    printf("Enter the size of row : ");
    scanf("%d", &r); // taking the size of row and columns
    int c;
    printf("Enter the size of columns : ");
    scanf("%d", &c);
    printf("Enter the elements of array size of %d X %d : ", r, c);
    int arr[r][c]; // initilize the aarry with that variables
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]); // taking the input from user by the using of loops (multiple inputs can taken)
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]); // jo input liya hai usse as it is print kar diye hai in the form of array
        }
        printf("\n"); // just for line change 1st row to 2nd row
    }
    int sum = 0; // delecration of sum to 0
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = sum + arr[i][j]; // sum +=arr[i][j]// jo value array ke 1st element aur sum
            // ke sating se aayeha usse sum me store kar lega fir sum ka naya value ko array
            // ke 2nd element se add kar ke usse sum me store kar lega
            // ye sab loop me hoga aur final value ko sum apne ander store kar ke rakhega
        }
    }
    printf("The sum of the given Matrix is %d", sum); // sum ko print kar do
    return 0;
}