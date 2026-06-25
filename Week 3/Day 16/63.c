#include <stdio.h>

int main(){
    int arr[5] = {1, 4, 5, 6, 3};
    int sum = 9;

    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
            if (arr[i] + arr[j] == sum){
                printf("Pair: %d + %d = %d\n", arr[i], arr[j], sum);
            }
        }
    }
    return 0;
}
