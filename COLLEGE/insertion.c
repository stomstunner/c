// #include<stdio.h>
// int main(){
//     int arr[10]={4,5,7,8,9};
//     printf("original elements : 4,5,7,8,9");
//     int size =5,element,position;
   
//     printf("Enter the elements that you want to be inserted : ");
//     scanf("%d",&element);
//     printf("Enter the position where you want to intertion : ");
//     scanf("%d",&position);
//     if(position<0 || position >= size){
//         printf("invalid");
//     }
//     else{
//         for(int i=position;i>size-1;i++){
//             arr[i]=arr[i+1];
//         }
//         // arr[position]=element;
//         size--;
//         for(int i=0;i<size;i++){
//             printf("%d ",arr[i]);
//         }
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int array[10] = {1, 2, 3, 4, 5}; // Original array with 5 elements
//     int size = 5; // Current size of the array
//     int i, element, position;

//     // Display the original array
//     printf("Original array: ");
//     for (i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }

//     // Get the element to be inserted
//     printf("\nEnter the element to be inserted: ");
//     scanf("%d", &element);

//     // Get the position where the element should be inserted
//     printf("Enter the position (0 to %d) where the element should be inserted: ", size);
//     scanf("%d", &position);

//     // Check if the position is valid
//     if (position < 0 || position > size) {
//         printf("Invalid position! Please enter a position between 0 and %d.\n", size);
//     } else {
//         // Shift elements to the right to make space for the new element
//         for (i = size; i > position; i--) {
//             array[i] = array[i - 1];
//         }

//         // Insert the new element at the specified position
//         array[position] = element;

//         // Update the size of the array
//         size++;

//         // Display the array after insertion
//         printf("Array after insertion: ");
//         for (i = 0; i < size; i++) {
//             printf("%d ", array[i]);
//         }
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int array[10] = {1, 2, 3, 4, 5}; // Original array with 5 elements
    int size = 5; // Current size of the array
    int i, position;

    // Display the original array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    // Get the position of the element to be deleted
    printf("\nEnter the position of the element to be deleted (0 to %d): ", size - 1);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position >= size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", size - 1);
    } else {
        // Shift elements to the left to fill the gap of the deleted element
        for (i = position; i < size - 1; i++) {
            array[i] = array[i + 1];
        }

        // Update the size of the array
        size--;

        // Display the array after deletion
        printf("Array after deletion: ");
        for (i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}

