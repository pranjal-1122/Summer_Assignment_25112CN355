#include <stdio.h>

int main(){
    int count =0, num, temp;
    printf("Enter a number ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0){
        temp = temp / 10;
        count += 1;
    }

    printf("total digits in %d is %d", num, count);
    
}