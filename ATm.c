#include <stdio.h>

int main() {
    int balance = 1000; // Initial account balance
    int withdraw, deposit;
    int choice;

    printf("Welcome to the ATM\n");

    do {
        printf("\nChoose your transaction:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: $%d\n", balance);
                break;

            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%d", &withdraw);

                if (withdraw > balance) {
                    printf("Insufficient balance. Try again.\n");
                } else {
                    balance -= withdraw;
                    printf("Withdrawal successful. Your updated balance is: $%d\n", balance);
                }
                break;

            case 3:
                printf("Enter the amount to deposit: ");
                scanf("%d", &deposit);

                balance += deposit;
                printf("Deposit successful. Your updated balance is: $%d\n", balance);
                break;

            case 4:
                printf("Thank you for using the ATM. Have a nice day!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}