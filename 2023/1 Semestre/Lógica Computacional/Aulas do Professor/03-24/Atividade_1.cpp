#include<stdio.h>
#include<stdlib.h>

int main()
{
	int menu = 0;
	char cliente_nome[10][50];
	int cliente_idade[10];
	int cliente_qtd = 0;
	int cliente_listar = 0;
	int cliente_jovem = 0;
	int cliente_idoso = 0;
	
	
	while(menu != 4)
	{
		
		printf("Menu de opcoes\n");
		printf("1 - Cadastrar\n");
		printf("2 - Consultar\n");
		printf("3 - Listar cliente novo e velho\n");
		printf("4 - Sair\n");
		scanf("%d", &menu);
		
		if(menu == 1)
		{
			system("CLS");
			printf("Digite o nome do cliente\n");
			scanf("%s", &cliente_nome[cliente_qtd]);
			
			printf("Digite a idade do cliente\n");
			scanf("%d", &cliente_idade[cliente_qtd]);
			
			cliente_qtd = cliente_qtd + 1;
			system("CLS");
		}
		else if(menu == 2)
		{
			system("CLS");
			for(cliente_listar = 0 ; cliente_listar < cliente_qtd; cliente_listar++)
			{
				printf("NOME: %s - IDADE: %d\n", cliente_nome[cliente_listar],cliente_idade[cliente_listar]);
			}
			system("PAUSE");
			system("CLS");
		}
		else if(menu == 3)
		{
			system("CLS");
			for(cliente_listar = 0 ; cliente_listar <= cliente_qtd; cliente_listar++)
			{
				if(cliente_listar > 0)
				{
					if(cliente_idade[cliente_listar] > cliente_idade[cliente_listar -1])
					{
						cliente_idoso = cliente_listar;
					}
					else if(cliente_idade[cliente_listar] < cliente_idade[cliente_listar -1])
					{
						cliente_jovem = cliente_listar;
					}
				}
				else
				{
					cliente_jovem = cliente_listar;
					cliente_idoso = cliente_listar;
				}
			}
			
			printf("Cliente mais jovem\n");
			printf("NOME: %s - IDADE: %d\n", cliente_nome[cliente_jovem],cliente_idade[cliente_jovem]);
			
			printf("Cliente mais velho\n");
			printf("NOME: %s - IDADE: %d\n", cliente_nome[cliente_idoso],cliente_idade[cliente_idoso]);
			
			system("PAUSE");
			system("CLS");
		}
	}
}
