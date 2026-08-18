#include <stdio.h>
int main(){
 int choice;
    float num1, num2, result;
 while (1)
    {
        printf("Choose an operation:\n"); 
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1/2/3/4/5): "); // Take user input for choice
        scanf("%d",&choice);
         while (getchar() != '\n');
        if (choice == 5)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;      // Exit the loop
        }
        printf("Enter the first number: "); // Take input for two numbers
        scanf("%f",&num1);
         while (getchar() != '\n');
        printf("Enter the second number: ");
        scanf("%f",&num2);
         while (getchar() != '\n');
        switch (choice)
        {
        case 1: //for  Addition
        result=num1+num2;
            printf("The result of addition: %f",result);
            break;
        case 2: // for Subtraction
             result=num1-num2;

            printf("The result of subtraction: %f",result );
            break;
        case 3: //for Multiplication
                result=num1*num2;

            printf("The result of multiplication:  %f",result );
            break;
        case 4: // for Division
            if (num2 != 0)
            {   
                 result=num1/num2;
                printf("The result of division:  %f",result);
            }
            else
            {
                printf("Error\n");
            }
            break;

        default:
            printf("Invalid choice\n");
        }

        printf("\n"); 
    }

    return 0;
}