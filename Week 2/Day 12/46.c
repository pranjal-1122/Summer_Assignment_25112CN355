#include <stdio.h>
#include <math.h>

int isArmstrong(int n){
    int sum=0, temp=n, digits=0;

    while (temp > 0){
        digits++;
        temp = temp / 10;
    }

    temp = n;
    while (temp > 0){
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == n);
}

int main(){
    int num = 153;
    if (isArmstrong(num))
        printf("%d is Armstrong", num);
    else
        printf("%d is Not Armstrong", num);
        
    return 0;
}
