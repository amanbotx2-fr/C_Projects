#include <stdio.h>

int main() {
    int choice;
    float balance = 10000.0; 
    float deposit;
    float withdraw;
    int pin;
    int entered_pin;

    pin = 1234;

    printf("Welcome to ATM\n");
    printf("Please enter your PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin != pin) {
        printf("Incorrect PIN. Access Denied.\n");
        return 0;
    }

    do {
        printf("\n----- ATM Menu -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &deposit);
                if (deposit > 0) {
                    balance += deposit;
                    printf("₹%.2f deposited successfully.\n", deposit);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &withdraw);
                if (withdraw > balance) {
                    printf("Insufficient balance!\n");
                } else if (withdraw <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance -= withdraw;
                    printf("₹%.2f withdrawn successfully.\n", withdraw);
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
