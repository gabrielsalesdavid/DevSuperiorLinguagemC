#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c, delta, x1, x2;

    printf("Coeficiente A: ");
    scanf("%lf", &a);
    printf("Coeficiente B: ");
    scanf("%lf", &b);
    printf("Coeficiente C: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (a == 0 || delta < 0) {
        printf("\nEsta equacao nao possui raizes rais");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nX1 = %.4lf", x1);
        printf("\nX2 = %.4lf", x2);
    }
    return 0;
}