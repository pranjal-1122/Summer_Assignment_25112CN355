#include <stdio.h>

struct Account{
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int choice;
    float amt;

    printf("Enter account number, name, balance: ");
    scanf("%d %s %f", &a.accNo, a.name, &a.balance);

    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Enter deposit amount: "); scanf("%f", &amt); a.balance+=amt; break;
            case 2: printf("Enter withdraw amount: "); scanf("%f", &amt);
                    if(amt<=a.balance) a.balance-=amt; else printf("Insufficient funds\n"); break;
            case 3: printf("Balance = %.2f\n", a.balance); break;
        }
    } while(choice!=4);
    return 0;
}
