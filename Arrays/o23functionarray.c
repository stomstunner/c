#include <stdio.h>
void fun(int arr[])     //int x[]
{                         // here we make a void function inegegral array
                         // wala functin and the size is not declear because musjhe nahi pata ki
                        // kaun se index ko calling lagaya jayega ,,khali rakhne se ham kitne  bhi
                       // size ka arrey laa sakte hai
    arr[0] = 10;  //x[0] , we can chang the name   // here we change the value of index number [0]=10
    return;          // and return the arr to main function arr[0]=10
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};     // size of the array is 5 and their values are {1,2,3,4,5}
    printf("%d\n", arr[0]);          // her we print the arr number 0 that is 1
    fun(arr);                       // calling of function
    printf("%d\n", arr[0]);        // after calling the void function here we print the array number [0] that is 10
    return 0;
}