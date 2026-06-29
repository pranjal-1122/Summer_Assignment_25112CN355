#include <stdio.h>

struct Item{
    int id;
    char name[50];
    int qty;
};

int main(){
    struct Item it[5];
    int n,i;
    printf("Enter number of items: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter id, name, qty: ");
        scanf("%d %s %d",&it[i].id,it[i].name,&it[i].qty);
    }
    printf("\nInventory:\n");
    for(i=0;i<n;i++) {
        printf("%d %s %d\n",it[i].id,it[i].name,it[i].qty);
    }
    return 0;
}
