#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char nome[20];
	int idade = 0;
	char cli_nome[50][20];
	int cli_idade[50];
	int cli_adulto[50];
	int cli_qtd = 0;
	int cli_listar = 0;
	int adulto;
	int status = 0;
	int novo = 1;
	
	while(novo == 1)
	{
		printf("Digite o nome: \n");
		scanf("%s", &nome);
		
		printf("Digite a idade: \n");
		scanf("%d", &idade);
		
		if(idade >= 18)
		{
			strcpy(cli_nome[cli_qtd],nome);
			cli_idade[cli_qtd] = idade;
			cli_adulto[cli_qtd] = 0;
			
			system("CLS");
			printf("Entrada do(a) %s Autorizada!\n", nome);
			
			cli_qtd = cli_qtd + 1;
		}
		else
		{
			system("CLS");
			printf("O menor de idade esta com adulto?\n")/
			printf("1 - SIM\n");
			printf("0 - NAO\n");
			printf("Digite 0 ou 1 para uma das condicoes acima!\n");
			scanf("%d", &adulto);
			
			if(adulto == 1)
			{
				strcpy(cli_nome[cli_qtd],nome);
				cli_idade[cli_qtd] = idade;
				cli_adulto[cli_qtd] = 1;
				
				system("CLS");
				printf("Entrada do(a) %s APROVADA com adulto!\n", nome);
				cli_qtd = cli_qtd + 1;
			}
			else
			{
				system("CLS");
				printf("Entrada do(a) %s NAO Autorizada!\n", nome);
			}
		}
		
		printf("Deseja realizar um novo cadastro?\n");
		printf("1 - SIM\n");
		printf("0 - NAO\n");
		printf("Digite 0 ou 1 para uma das condicoes acima!\n");
		scanf("%d", &novo);
	}
	while(cli_listar < cli_qtd)
	{
		printf("NOME: %s - IDADE: %d - ADULTO: %d\n",cli_nome[cli_listar],cli_idade[cli_listar],cli_adulto[cli_listar]);
		cli_listar = cli_listar + 1;
	}
	
}
