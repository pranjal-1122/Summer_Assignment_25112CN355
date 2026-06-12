#include <stdio.h>

void fibonacci(int n) {
    int a=0, b=1, i, next;
    for (i=1; i <= n; i++){

        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;

    }

    printf("\n");
}

int main(){
    int terms = 10;
    fibonacci(terms);
    return 0;
}
