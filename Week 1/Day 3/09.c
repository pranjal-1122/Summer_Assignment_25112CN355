#include <stdio.h>
int main(){
    int i, count=0, num;
    printf("Enter a Number ");
    scanf("%d", &num);

    for(i = 2; i < num; i++){
        if(num % i == 0){
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("Number is Prime");
    }
    else{
        printf("Number is NOT Prime");
    }
    
    return 0;  
}