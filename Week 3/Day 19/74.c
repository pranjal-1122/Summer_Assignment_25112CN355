#include <stdio.h>

int main(){
    int n, m, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m], b[n][m], diff[n][m];

    printf("Enter first matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            diff[i][j] = a[i][j] - b[i][j];

    printf("Difference matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) printf("%d ", diff[i][j]);
        printf("\n");
    }
    return 0;
}
