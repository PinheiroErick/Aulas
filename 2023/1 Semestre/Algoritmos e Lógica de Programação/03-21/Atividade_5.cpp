#include<stdio.h>

int main()
{
	int idade = 0;
	char nome[20];
	
	while(idade < 18)
	{
		printf("Digite o nome da maior de idade: ");
		scanf("%s", &nome);
		
		printf("Digite a idade da %s: ",nome);
		scanf("%d", &idade);
	}
	printf("Cadastrado com Sucesso!");
}
