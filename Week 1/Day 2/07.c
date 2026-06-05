#include <stdio.h>

int main(){
    int num, temp, prod=1;
    printf("Enter a Number");
    scanf("%d", &num);

    while(num != 0 ){
        temp = num % 10;
        prod *= temp;
        num = num/10;
    }

    printf("Product of digits of your number is %d", prod);

    return 0;
     
}