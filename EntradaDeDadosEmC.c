#include <stdio.h>

int main() {

	int idade;
	char nome[50];

	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	fseek(stdin, 0, SEEK_END);
	printf("Digite o seu nome: ");
	gets(nome);

	printf("Idade = %d\n", idade);
	printf("Nome = %s\n", nome);

	return 0;
}