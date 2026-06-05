#include <stdio.h>
#include <math.h>

int main(){
    int sum=0, count=0, temp1, temp2, num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    //counting digits of the number
    temp1 = num;
    temp2 = num;

    while(temp1 != 0){
        temp1 = temp1 / 10;
        count++;
    }

    while(temp2 != 0){
        temp1 = temp2 % 10;   
        sum += (int)round(pow(temp1, count));
        temp2 = temp2/10;
    }

    if (sum == num)     
    {
        printf("%d is Armstrong", num);
    }
    else{
        printf("%d is not Armstrong", num);
    }
    
    printf("%d", sum);

    return 0;
}