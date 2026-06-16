#include <stdio.h>

int main(){
    int arr[7] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;
    printf("After removing duplicates: ");

    for (int i = 0; i < n; i++){
        int flag = 0;
        for (int j = 0; j < i; j++){
            if (arr[i] == arr[j]){
                flag = 1;
                break;
            }
        }

        if (!flag){
            printf("%d ", arr[i]);
        }

    }
    return 0;
}
