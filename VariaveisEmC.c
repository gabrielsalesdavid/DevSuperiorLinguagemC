#include <stdio.h>
#include <string.h>

int main() {

    // tipos de variaveis:
    // int, float, char e char(passando com uma string).
    // nomes das variaveis:
    // idade, salario, altura, genero, nome.
    int idade;
    float salario, altura;
    char genero;
    char nome[50];

    // instanciacao dos nomes das variaveis:
    // tipos das variaveis recebendo valores.
    // a variavel strcpy, e uma string
    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    // saida de dados.
    // passando como parametro a mensagem e os nomes dos tipos das variaveis.
    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s\n", nome);

    return 0;
}