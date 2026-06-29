#include <stdio.h>

int main() {
    int balance = 1000, choice, amount;
    do {
        printf("\nATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Balance = %d\n", balance); break;
            case 2: printf("Enter deposit amount: "); scanf("%d", &amount); balance += amount; break;
            case 3: printf("Enter withdraw amount: "); scanf("%d", &amount);
                    if (amount <= balance) balance -= amount;
                    else printf("Insufficient funds\n"); break;
        }
    } while (choice != 4);
    return 0;
}
