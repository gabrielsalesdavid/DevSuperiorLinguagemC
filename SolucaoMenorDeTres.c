#include <stdio.h>

int main () {

    int valor01, valor02, valor03, menor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor01);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor02);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor03);

    if (valor01 < valor02 && valor01 < valor03) {
        menor = valor01;
    } else if (valor02 < valor03) {
        menor = valor02;
    } else {
        menor = valor03;
    }
    printf("\nMenor = %d", menor);

    return 0;
}