#include <stdio.h>

int main(){
    int num, temp, sum=0;
    printf("Enter a Number");
    scanf("%d", &num);

    while(num != 0){
        temp = num % 10;
        sum += temp;
        num = num / 10;
    }

    printf("Sum of digits in your number is %d", sum);

    return 0;
}