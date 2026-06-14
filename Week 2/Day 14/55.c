#include <stdio.h>

int main(){
    int arr[6] = {10, 20, 5, 30, 25, 15};
    int largest = arr[0], second = -1;
    for (int i = 1; i < 6; i++){
        
        if (arr[i] > largest){
            second = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
    
    printf("Second largest = %d\n", second);
    return 0;
}
