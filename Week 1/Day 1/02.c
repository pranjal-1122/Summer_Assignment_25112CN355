#include <stdio.h>

int main(){
    int num, product=1;
    printf("Enter a Number");
    scanf("%d", &num);

    for(int i = 1; i <=10; i++){
        product = num * i;
        printf("%d x %d = %d\n",num,i,product);
    }

    return 0;
    
}