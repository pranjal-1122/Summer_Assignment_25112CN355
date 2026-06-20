#include <stdio.h>

int main(){
    int n, m, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    printf("Enter matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        int sum = 0;
        for (j = 0; j < m; j++) sum += a[i][j];
        printf("Row %d sum = %d\n", i+1, sum);
    }
    return 0;
}
