#include <stdio.h>

int main() {
    int seats=10, book;
    while(seats>0) {
        printf("Available seats: %d\nEnter seats to book: ", seats);
        scanf("%d", &book);
        if(book<=seats) {
            seats-=book;
            printf("Booked %d seats. Remaining: %d\n", book, seats);
        } else {
            printf("Not enough seats!\n");
        }
    }
    printf("All seats booked!\n");

    return 0;
    
}
