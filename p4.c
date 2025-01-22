#include <stdio.h>

void showMenu();
int add(int a, int b);
int subtract(int a, int b);
// TODO: Implement multiply and divide functions.

int main() {
    int choice, num1, num2, result;

    while (1) {
        showMenu();
        printf("Enter your choice (1-4, 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 3:
                // TODO: Call the multiply function and display the result.
                printf("Multiply function is not implemented yet.\n");
                break;
            case 4:
                // TODO: Call the divide function and handle division by zero.
                printf("Divide function is not implemented yet.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void showMenu() {
    printf("\n*** Simple Calculator ***\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("0. Exit\n");
    printf("*************************\n");
}


// TODO: Define all the funciton
