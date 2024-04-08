#include <stdio.h>

int main () {

    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o numero: ");
        scanf("%d", &vet[i]);
    }

    printf("Numeros negativos: \n");
    for (int i = 0; i < n; i++) {
        if (vet[i] < 0) {
            printf("%d \n", vet[i]);
        }
    }

    return 0;
}