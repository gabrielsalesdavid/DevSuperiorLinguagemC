#include <stdio.h>

int main () {

    int num01, num02, somaImpares, trocaValor;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &num01, &num02);

    if (num01 > num02) {
        trocaValor = num01;
        num01 = num02;
        num02 = trocaValor;
    }

    somaImpares = 0;
    for (int i = num01 + 1; i < num02; i++ ) {
       if (i % 2 != 0) {
           somaImpares = somaImpares + i;
       }
    }

    printf("Soma dos impares = %d \n", somaImpares);

    return 0;
}