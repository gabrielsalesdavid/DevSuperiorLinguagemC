#include <stdio.h>

int main() {

    int n, qtdNegativos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal Principal: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mat[i][i]);
    }

    qtdNegativos = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                qtdNegativos = qtdNegativos + 1;
            }
        }
    }

    printf("\nQuantidade de negativos: \n");
    printf("%d", qtdNegativos);

    return 0;
}