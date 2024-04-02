#include <stdio.h>

int main () {

    int hora;

    printf("Digite a hora do dia: ");
    scanf("%d", &hora);

    if (hora < 12) {
        printf("Bom dia \n");
    } else {
        printf("Boa noite! \n");
    }

    return 0;
}