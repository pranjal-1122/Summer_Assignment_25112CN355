#include <stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main(){
    int x = 10, y = 20;
    printf("Maximum is %d", maximum(x, y));
    return 0;
}
