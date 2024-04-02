#include <stdio.h>

int main () {

    int n, i, x, soma;

    printf("Quantos numeros serao digitados? ");
    scanf("%d", &n);

    soma = 0;

    for (i = 1; i <= n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("Soma = %d\n", soma);

    return 0;
}