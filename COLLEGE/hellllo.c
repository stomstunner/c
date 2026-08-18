#include <stdio.h>

int main() {
    int arr[100], size = 0, choice, element, position, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insertion
                if (size >= 100) {
                    printf("Array is full. Cannot insert.\n");
                    break;
                }

                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (1-based index): ");
                scanf("%d", &position);

                if (position < 1 || position > size + 1) {
                    printf("Invalid position! Position should be between 1 and %d\n", size + 1);
                    break;
                }

                for (i = size; i >= position; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[position - 1] = element;
                size++;

                printf("Element inserted successfully.\n");
                break;

            case 2: // Deletion
                if (size == 0) {
                    printf("Array is empty. Nothing to delete.\n");
                    break;
                }

                printf("Enter position to delete (1-based index): ");
                scanf("%d", &position);

                if (position < 1 || position > size) {
                    printf("Invalid position! Position should be between 1 and %d\n", size);
                    break;
                }

                for (i = position - 1; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                size--;

                printf("Element deleted successfully.\n");
                break;

            case 3: // Traversal
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Exit
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
