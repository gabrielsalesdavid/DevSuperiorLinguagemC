#include <stdio.h>

int main () {

    int n, contMenor;
    double somaDasAlturas, madiaDasAlturas, percentMenor;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char vetNome[n][50];
    int vetIdade[n];
    double vetAlturas[n];

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome:");
        fseek(stdin, 0, SEEK_END);
        gets(vetNome[i]);
        printf("Idade: ");
        scanf("%d", &vetIdade[i]);
        printf("Altura: ");
        scanf("%lf", &vetAlturas[i]);
    }

    somaDasAlturas = 0;
    for (int i = 0; i < n; i++) {
        somaDasAlturas = somaDasAlturas + vetAlturas[i];
    }

    madiaDasAlturas = somaDasAlturas / n;
    printf("Altura media: %.2lf", madiaDasAlturas);

    contMenor = 0;
    for (int i = 0; i < n; i++) {
        if (vetIdade[i] < 16) {
            contMenor++;
        }
    }

    percentMenor = contMenor * 100.0 / n;
    printf("\nPessoas com menos de 16 anos: %.1lf%%\n", percentMenor);

    for (int i = 0; i < n; i++) {
        if (vetIdade[i] < 16) {
            printf("%s\n", vetNome[i]);
        }
    }

    return 0;
}