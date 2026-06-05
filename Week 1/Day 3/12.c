#include <stdio.h>
int main(){
    int i, num1, num2, lcm;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &num1, &num2);

    lcm = (num1 > num2)? num1 : num2;

    while(1){
        if(lcm % num1 == 0 && lcm % num2 == 0){
            break;
        }
        lcm++;
    }

    printf("LCM of %d and %d is %d", num1, num2, lcm);
     
}