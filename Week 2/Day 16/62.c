#include <stdio.h>

int main(){
    int arr[7] = {1, 2, 2, 3, 3, 3, 4};
    int maxCount = 0, element = arr[0];

    for (int i = 0; i < 7; i++){
        int count = 0;

        for (int j = 0; j < 7; j++){
            if (arr[i] == arr[j]) count++;
        }

        if (count > maxCount){
            maxCount = count;
            element = arr[i];
        }
    }
    printf("Max frequency element = %d\n", element);
    return 0;
}
