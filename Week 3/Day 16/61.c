#include <stdio.h>

int main(){
    int arr[4] = {1, 2, 4, 5};
    int n = 5, sum = 0;

    for (int i = 0; i < 4; i++){
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    printf("Missing number = %d\n", total - sum);
    return 0;
}
