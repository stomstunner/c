#include <stdio.h>
void reverse(int arr[], int si, int ei)
{

    for (int i = si, j = ei; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n;
    printf("Enter the size of your array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter how many times you want to rotate the array :");
    scanf("%d", &k);
    k = k % n; // if k is greater than n
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Que. rotate the given array 'a' by k steps , where k is non - negative .
not-- k can be greater than n as well where n is the size of the array 'a'.
if arr= { 1,2,3,4}
k=4 -- rotation 2 times ,,,{ 3,4,1,2}
3 times { 2,3,4,1}
if k>n means the roatation of array is the more than size of the array
then k= k%n; it gives the less than n value because is the k is = n
then the array beacme the origianal array

index=0   1  2  3  4  5  6   n=7 // Step 0>> k=3   and if k>n then   k= k%n
arr   1   2  3  4  5  6  7
k= 3= 5   6  7  1  2  3  4

s = 1>  reverse(arr,0,6) // reverse the arrey to the index from 0 to 6
  7   6  5   4  3  2  1
s=2> reverse(arr,0,2)
  5  6  7  4  3  2  1
s=3 now recerse(arr,3,6)
  5  6  7   1  2  3  4  === k=3
*/