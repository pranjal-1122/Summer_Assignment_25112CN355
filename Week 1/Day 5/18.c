#include <stdio.h>
int main(){
    int num, sum=0, fact=1, temp;

    printf("Enter a Number");
    scanf("%d", &num);

    temp = num;
    while(temp != 0){

        int digit = temp % 10;

        fact = 1;
        for(int i = 1; i <= digit; i++){
            fact *= i;
        }

        sum += fact;
        temp = temp/10;
    }
   
    if(num == sum){
        printf("%d IS A STRONG NUMBER", num);
    }
    else{
        printf("%d IS NOT A STRONG NUMBER", num);        
    }

    return 0;
}