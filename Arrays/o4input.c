#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter your first element : ");
    scanf("%d", &arr[0]);

    printf("Enter your second element : ");
    scanf("%d", &arr[1]);

    printf("Enter your third element : ");
    scanf("%d", &arr[2]);

    printf("Enter your fourt element : ");
    scanf("%d", &arr[3]);

    printf("Enter your fifth element : ");
    scanf("%d", &arr[4]);
    printf("Your fifth element is : %d", arr[4]);
    return 0;
}