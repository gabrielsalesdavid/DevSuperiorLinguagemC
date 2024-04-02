#include <stdio.h>

int main () {

    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y) {
        if (x < y) {
            printf("Crescente!");
        } else {
            printf("Decrescente!");
        }
        printf("\nDigite outros dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    return 0;
}