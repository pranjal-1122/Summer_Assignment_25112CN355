#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main(){
    struct Contact c[5];
    int n, i;
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("Enter name and phone: ");
        scanf("%s %s", c[i].name, c[i].phone);
    }
    printf("\nContacts:\n");
    for(i=0;i<n;i++) {
        printf("%s - %s\n", c[i].name, c[i].phone);
    }
    return 0;
}
