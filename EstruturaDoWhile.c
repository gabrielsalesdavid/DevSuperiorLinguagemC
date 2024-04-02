#include <stdio.h>

int main () {

    double c, f;
    char resp;

    do {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &c);
        f = 9.0 * c / 5.0 + 32.0;
        printf("Equivalente em Fahrenheit: %.1lf\n", f);
        printf("Deseja repetir (S/N)? ");
        fseek(stdin, 0, SEEK_END);
        scanf("%c", &resp);
    } while (resp == 'S');

    return 0;
}