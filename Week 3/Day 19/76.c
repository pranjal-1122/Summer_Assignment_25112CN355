#include <stdio.h>

int main(){
    int n, i;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n], sum = 0;

    printf("Enter matrix:\n");
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) sum += a[i][i]; // main diagonal

    printf("Diagonal sum = %d\n", sum);
    return 0;
}
