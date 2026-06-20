#include <stdio.h>

int main(){
    int n, m, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m], trans[m][n];

    printf("Enter matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            trans[j][i] = a[i][j];

    printf("Transpose:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}
