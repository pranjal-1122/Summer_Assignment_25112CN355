#include <stdio.h>

int main() {
    int num, bin[32], i = 0;
    printf("Enter decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", bin[i]);
    }    
    return 0;
}
