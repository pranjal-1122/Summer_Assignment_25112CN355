#include <stdio.h>

int main(){
    int a = 0, b = 1, c, num;
    printf("Enter a Number ");
    scanf("%d", &num);

    for(int i = 2; i < num; i++){
        
        c = a + b;
        a = b;
        b = c;
    }

    printf("%dth term of Fibonacci Series is: %d", num,  c);
    return 0;  
}