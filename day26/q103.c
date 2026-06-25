#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.0, amount;

    printf("ATM Simulation\n");
    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your balance is: $%.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("New balance: $%.2f\n", balance);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount > balance) printf("Insufficient funds!\n");
            else printf("Withdrawal successful. Remaining: $%.2f\n", balance - amount);
            break;
        case 4:
            printf("Thank you for using our ATM.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}