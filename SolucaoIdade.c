#include <stdio.h>
int main() {

    char nome01[50], nome02[50];
    int idade01, idade02;
    double media;

    printf("\nDados da primeira pessoa: ");
    printf("\nNome: ");
    gets(nome01);
    printf("Idade: ");
    scanf("%d", &idade01);

    printf("\nDados da segunda pessoa: ");
    printf("\nNome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome02);
    printf("Idade: ");
    scanf("%d", &idade02);

    media = (idade01 + idade02) / 2.0;

    printf("A idade media de %s e %s eh de %.1lf anos", nome01, nome02, media);

    return 0;
}