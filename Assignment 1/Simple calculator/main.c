#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n");

    if (choice == 1) {
        printf("Result: %d\n", a + b);
    }
    else if (choice == 2) {
        printf("Result: %d\n", a - b);
    }
    else if (choice == 3) {
        printf("Result: %d\n", a * b);
    }
    else if (choice == 4) {
        printf("Result: %d\n", a / b);
    }
    else if (choice == 5) {
        printf("Result: %d\n", a % b);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}

