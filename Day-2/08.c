#include <stdio.h>

int main(){
    int num, temp, digit, rev=0;
    printf("Enter a Number ");
    scanf("%d", &num);
    
    temp = num;

    while(num != 0){
        digit = num % 10;
        rev = rev*10 + digit;
        num = num /10;
    }

    if(temp == rev){
        printf("The number is palindrome");
    }
    else{
        printf("The number is NOT palindrome");
    }

    return 0;
}