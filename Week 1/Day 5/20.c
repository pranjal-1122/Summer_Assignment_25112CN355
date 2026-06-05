#include <stdio.h>

int main(){
    int num, count=0, primeFactor=0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if(num % i == 0){

            count = 0;
            for(int j = 2; j*j <= i; j++){

                if(i % j == 0){
                    count++;
                    break;
                }

            }
   
            if(count == 0){
                if(i > primeFactor){
                    primeFactor = i;
                }
            }
        }
    }

    printf("Largest Prime Factor of %d is %d ", num, primeFactor);

    return 0;
}