/*
Faça um algoritmo de cadastro de entrada de clientes.

Solicite nome e idade.

Se idade for menor que 18 informe "Não Autorizado" e
solicite um novo cadastro.

Se for maior ou igual a 18 informe "Entrada Autorizada"
e encerre o sistema.
*/

#include<stdio.h>

int main()
{
	char nome[50];
	int idade = 0;
	
	while(idade < 18)
	{
		printf("Digite o nome: ");
		scanf("%s", &nome);
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		if(idade >= 18)
		{
			printf("Entrada Autorizada!\n");
		}
		else
		{
			printf("Entrada NAO Autorizada!\n");
		}
	}
		
}
