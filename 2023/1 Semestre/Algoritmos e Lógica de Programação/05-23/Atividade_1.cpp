#include<stdio.h>
#include<stdlib.h>

void F_menu();

char nome[50][10];
int qtd = 0;

void F_cadastrar()
{
	system("CLS");
	printf("Digite seu lindo nome: ");
	scanf("%s", &nome[qtd]);
	qtd++;
	F_menu();
}

void F_consultar()
{
	system("CLS");
	int listar = 0;
	while(listar < qtd)
	{
		printf("[%d] %s\n", listar, nome[listar]);
		listar++;
	}
	printf("\n\n\n");
}

void F_editar()
{
	int editar;
	F_consultar();
	printf("\n\n Selecione o nome para editar: ");
	scanf("%d", &editar);
	
	printf("Nome atual: %s\n", nome[editar]);
	printf("Digite o novo nome: ");
	scanf("%s", &nome[editar]);
	
	printf("\n\nAtualizado com sucesso!\n\n");
	system("PAUSE");
	F_menu();
}

void F_menu()
{
	system("CLS");
	int op;
	printf("MENU TOP\n\n\n");
	printf("1 - Cadastrar\n");
	printf("2 - Editar\n");
	printf("3 - Consultar\n");
	printf("0 - Sair\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 0:
		break;
		case 1: 
			F_cadastrar();
		break;
		case 2:
			F_editar();
		break;
		case 3:
			F_consultar();
			system("PAUSE");
			F_menu();
		break;
		
		default:
			F_menu();
	}
}

int main()
{
	F_menu();
}
