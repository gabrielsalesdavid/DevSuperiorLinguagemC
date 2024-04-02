#include <stdio.h>
#include <math.h>

int main () {

    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("\nArea = %.4lf", area);
    printf("\nPerimetro = %.4lf", perimetro);
    printf("\nDiagonal = %.4lf", diagonal);

    return 0;
}