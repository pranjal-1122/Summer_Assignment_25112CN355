#include <stdio.h>

int main(){
    int arr[5],i,sum=0;
    float avg;

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 5.0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
