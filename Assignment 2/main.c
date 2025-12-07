#include <stdio.h>

// Function declarations
void checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main() {
    int correctPin = 2111;
    int userPin;
    int attempts = 3;
    int balance = 5000; // starting balance

    // PIN verification
    while (attempts > 0) {
        printf("\nPlease enter your PIN: ");
        scanf("%d", &userPin);

        if (userPin == correctPin) {
            printf("\n✔ Logged in successfully!\n");
            break;
        } else {
            attempts--;
            printf("❌ Incorrect PIN! Remaining attempts: %d\n", attempts);
        }

        if (attempts == 0) {
            printf("\n❌ Too many attempts! Access Denied.\n");
            return 0;
        }
    }

    // ATM Menu
    int choice;
    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("\nThank you for using this ATM. Goodbye!\n");
                break;

            default:
                printf("\nInvalid option! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

// Function definitions
void checkBalance(int balance) {
    printf("\nYour current balance is: %d\n", balance);
}

int deposit(int balance) {
    int amount;
    printf("\nEnter the amount to deposit: ");
    scanf("%d", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposit successful! New balance: %d\n", balance);
    } else {
        printf("Invalid amount!\n");
    }

    return balance;
}

int withdraw(int balance) {
    int amount;
    printf("\nEnter the amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= balance && amount > 0) {
        balance -= amount;
        printf("Withdrawal successful! New balance: %d\n", balance);
    } else {
        printf("Insufficient balance or invalid amount!\n");
    }

    return balance;
}
