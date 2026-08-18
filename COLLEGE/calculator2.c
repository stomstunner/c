#include <stdio.h>
int main() {
    int choice;
    float num1, num2, result;
    while (1){  // Infinite loop for the menu
        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1/2/3/4/5): ");
        scanf("%d", &choice);
        while (getchar() != '\n');// to clear the buffer
        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break;                 
        }
        printf("Enter the first number: ");
        scanf("%f", &num1);
        while (getchar() != '\n');  // Clear buffer after input
        printf("Enter the second number: ");
        scanf("%f", &num2);
        while (getchar() != '\n');  // Clear buffer after input
        switch (choice) {
            case 1: result = num1 + num2;  // for Addition 
                printf("The result of addition: %f\n", result);
                break;
            case 2:  result = num1 - num2;  // for Subtraction
                printf("The result of subtraction: %f\n", result);
                break;
            case 3:  result = num1 * num2; // for Multiplication
                printf("The result of multiplication: %f\n", result);
                break;
            case 4:  // for Division
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("The result of division: %f\n", result);
                } else printf("Error: Division by zero is not allowed.\n");
                 break;
            default: printf("Invalid choice\n");
        }
         printf("\n");
    }
    return 0;
}
