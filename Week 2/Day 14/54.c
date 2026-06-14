#include <stdio.h>

int main(){
    int arr[6] = {1, 2, 3, 2, 4, 2};
    int key = 2, count = 0;
    for (int i = 0; i < 6; i++){
        if (arr[i] == key)
            count++;
    }
    printf("Frequency of %d = %d\n", key, count);
    return 0;
}
