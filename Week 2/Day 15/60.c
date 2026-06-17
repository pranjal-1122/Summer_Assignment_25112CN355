#include <stdio.h>

int main(){
    int arr[7] = {0, 1, 0, 3, 12, 0, 5};
    int count = 0;

    for (int i = 0; i < 7; i++){
        if (arr[i] != 0){
            arr[count++] = arr[i];
        }
    }
    while (count < 7){
        arr[count++] = 0;
    }
    printf("after moving zeroes: ");

    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
