#include <stdio.h>

int isPerfect(int n){
    int sum = 0, i;
    for (i = 1; i <= n/2; i++){
        if (n % i == 0)
            sum += i;
    }
    return (sum == n);
}

int main(){
    int num = 28;
    if (isPerfect(num))
        printf("%d is Perfect Number", num);
    else
        printf("%d is Not Perfect Number", num);
    return 0;
}
