#include <stdio.h>
int main(){
    int num, sum=0;
    printf("Enter a Number");
    scanf("%d", &num);

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == num){
        printf("%d IS A PERFECT NUMBER", num);
    }
    else{
        printf("%d IS NOT A PERFECT NUMBER", num);
    }

    return 0;   
}