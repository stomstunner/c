
// write  a program to reverse  the array without using extra array
#include <stdio.h>

void reverse(int arr[])
{ // a void funtion that name is reverse  aur usme ek array hai jika size declere nahi hai
    // int i= 0;   // making a new variable that is initilize with the index of the arry ( first index)
    // int j = 6; // n-1 (decleare a new variable that is n-1)
    // while (i<j){ // makinf a while loop that run when i is less than j ..means 0 < 6...
    //     int temp = arr[i]; // concept of swaping the two numbers
    //     arr[i]= arr[j];
    //     arr[j]= temp;
    //     i++; // increse the vale of i and decrease the value of j
    // j--;
    // }
    for (int i = 0, j = 6; i < j; i++, j--) // NEW THINGH
    // 7 6 5   3 2 1
    //{1,2,3,4,5,6,7}
    // i i i ij j j j // i=j ==break
    // 0,1,2,3,4,5,6
    {
        int temp = arr[i]; // concept of swaping the two numbers
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // given number or te values
    reverse(arr);                       // the is a function for the calling the reverse  function
    for (int i = 0; i <= 6; i++)
    {                          // the simple for loopp the print the array
        printf("%d ", arr[i]); // print funtion for the printing the array
    }
    return 0;
}