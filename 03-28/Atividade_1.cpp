#include<stdio.h>

int main()
{
	char cliente_nome[10][50];
	int cliente_idade[10];
	int cliente_qtd = 0;
	int cliente_listar = 0;
	int cliente_cad = 1;
	
	while(cliente_cad == 1)
	{
		printf("Digite o nome do cliente: \n");
		scanf("%s", &cliente_nome[cliente_qtd]);
		
		printf("Digite a idade do cliente: \n");
		scanf("%d", &cliente_idade[cliente_qtd]);
		
		cliente_qtd = cliente_qtd + 1;
		
		printf("\n\nNovo cadastro?\n\n");
		printf("1 - SIM\n");
		printf("0 - NAO\n");
		printf("Digite a opcao desejada:\n");
		scanf("%d", &cliente_cad);
	}
	
	printf("Lista de clientes\n\n");
	
	while(cliente_qtd > cliente_listar)
	{
		printf("NOME: %s - IDADE: %d \n",cliente_nome[cliente_listar], cliente_idade[cliente_listar]);
		
		cliente_listar = cliente_listar + 1;
	}
}
