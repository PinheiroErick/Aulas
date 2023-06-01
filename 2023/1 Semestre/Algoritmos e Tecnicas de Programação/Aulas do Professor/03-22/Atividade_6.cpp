/*
Faça um algoritmo de cadastro de entrada de clientes.

Solicite nome e idade.

Se idade for menor que 18 informe "Não Autorizado" e
solicite um novo cadastro.

Se for maior ou igual a 18 informe "Entrada Autorizada"
e encerre o sistema.

Se for menor que 18 e estiver com um adulto, "Entrada Autorizada!"
*/

#include<stdio.h>

int main()
{
	char nome[50];
	int idade = 0;
	int adulto;
	int status = 0;
	
	while(status == 0)
	{
		printf("Digite o nome: ");
		scanf("%s", &nome);
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		if(idade >= 18)
		{
			status = 1;
			printf("Entrada do(a) %s Autorizada!\n", nome);
		}
		else
		{
			printf("O menor de idade esta com adulto?\n")/
			printf("1 - SIM\n");
			printf("0 - NAO\n");
			printf("Digite 0 ou 1 para uma das condicoes acima!\n");
			scanf("%d", &adulto);
			
			if(adulto == 1)
			{
				status = 1;
				printf("Entrada do(a) %s APROVADA com adulto!", nome);
			}
			else
			{
				printf("Entrada do(a) %s NAO Autorizada!\n", nome);
			}
		}
	}
		
}
