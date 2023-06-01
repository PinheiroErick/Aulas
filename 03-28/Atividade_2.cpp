#include<stdio.h>
#include<stdlib.h>

int main()
{
	char cli_nome[100][20];
	int cli_qtd = 0;
	int cli_listar = 0;
	char pro_nome[100][20];
	int pro_qtd = 0;
	int pro_listar = 0;
	float pro_valor[100];
	int com[100];
	int menu = 1;
	
	while(menu < 7)
	{
		printf("Super sistema TOP \n\n\n");
		printf("1 - Cadastro de Clientes\n");
		printf("2 - Listar Clientes\n");
		printf("3 - Cadastro de Produtos\n");
		printf("4 - Listar Produtos\n");
		printf("5 - Cadastro de Comandas\n");
		printf("6 - Listar Comandas\n");
		printf("7 - SAIR\n\n");
		printf("Digite a opcao e  tecle ENTER\n");
		scanf("%d", &menu);
		
		if(menu == 1)
		{
			system("CLS");
			printf("Cadastro de clientes\n\n");
			
			printf("Digite o nome: \n");
			scanf("%s", &cli_nome[cli_qtd]);
			
			cli_qtd = cli_qtd + 1;
			
			system("CLS");
		}
		else if(menu == 2)
		{
			cli_listar = 0;
			system("CLS");
			
			printf("Lista de clientes\n\n");
			
			while(cli_qtd > cli_listar)
			{
				printf("%s\n",cli_nome[cli_listar]);
				
				cli_listar = cli_listar + 1;
			}
			printf("\n");
			system("PAUSE");
			system("CLS");
		}
		else if(menu == 3)
		{
			system("CLS");
			printf("Cadastro de produtos\n\n");
			
			printf("Digite o nome: \n");
			scanf("%s", &pro_nome[pro_qtd]);
			
			printf("Digite o valor: \n");
			scanf("%f", &pro_valor[pro_qtd]);
			
			pro_qtd = pro_qtd + 1;
			
			system("CLS");
		}
		else if(menu == 4)
		{
			pro_listar = 0;
			system("CLS");
			
			printf("Lista de produtos\n\n");
			
			while(pro_qtd > pro_listar)
			{
				printf("%s - %.2f\n",pro_nome[pro_listar],pro_valor[pro_listar]);
				
				pro_listar = pro_listar + 1;
			}
			printf("\n");
			system("PAUSE");
			system("CLS");
		}
	}
	
	
}
