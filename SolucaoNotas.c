#include <stdio.h>

int main () {

    double nota01, nota02, notaFinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota01);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota02);

    notaFinal = nota01 + nota02;

    printf("Nota final = %.1lf", notaFinal);

    if (notaFinal < 60.0) {
        printf("\nReprovado!");
    } else {
        printf("\nAprovado!");
    }
    return 0;
}