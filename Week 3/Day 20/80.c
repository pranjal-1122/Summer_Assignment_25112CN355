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

    for (j = 0; j < m; j++) {
        int sum = 0;
        for (i = 0; i < n; i++) sum += a[i][j];
        printf("Column %d sum = %d\n", j+1, sum);
    }
    return 0;
}
