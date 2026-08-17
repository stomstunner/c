#include<stdio.h>
int main(){
    float num1,num2,result;
    int choice;
    while (1){
        printf("Choose an operation\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice 1/2/3/4/5 : \n");
        scanf("%d", &choice);
        // while ( getchar() != '\n');

        if(choice == 5) {
            printf("Exiting the calculator, Goodbye!\n");
            break;
        }
        printf("Enter the First number : ");
        scanf("%f", &num1);
        // while(getchar() != '\n');
        printf("Enter the Second number : ");
        scanf("%f", &num2);
        // while( getchar () != '\n');
        switch ( choice) {
            case 1 : result = num1 + num2 ;
                     printf("The addition of %.2f and %.2f = %.2f",num1, num2, result);
                   break;
            case 2 : result = num1 - num2 ;
                     printf("The substraction of %.2f and %.2f = %.2f", num1, num2, result);
                     break;
            case 3 : result = num1 * num2;
                     printf("The multiplication of %.2f and %.2f = %.2f", num1, num2, result);
                     break;
            case 4 : if ( num2 != 0){
                        result = num1/ num2;
                        printf("The divion of %.2f and %.2f = %.2f", num1, num2, result);
                     } 
                     else printf("Error! Please enter the valid divisor");
                     break;
            default : printf("Invalid choice\n");
        }
        printf("\n\n");
    }
    return 0;
}