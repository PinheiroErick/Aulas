#include<stdio.h>
#include<stdlib.h>

void F_menu();
void F_cadastro();
void F_consulta();

char nome[10][10];
int nasc[10];
int idade[10];
int qtd = 0;

void F_cadastro()
{
	printf("Digite o nome: \n");
	scanf("%s", &nome[qtd]);
	printf("Digite o ano de nascimento: \n");
	scanf("%d", &nasc[qtd]);
	
	idade[qtd] = 2023 - nasc[qtd];
	
	qtd++;
	F_menu();
}

void F_consulta()
{
	int listar = 0;
	
	while(listar < qtd)
	{
		printf("%d NOME: %s | NASC: %d | IDADE: %d | ", listar, nome[listar], nasc[listar], idade[listar]);
		if(idade[listar] >= 18)
		{
			printf("MAIOR DE IDADE\n");
		}
		else
		{
			printf("MENOR DE IDADE\n");
		}
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void F_menu()
{
	int opcao;
	system("CLS");
	printf("MENU\n\n\n");
	printf("1 - CADASTRAR\n");
	printf("2 - CONSULTAR\n");
	printf("3 - SAIR\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1 :
			F_cadastro();
		break;
		case 2 :
			F_consulta();
		break;
		case 3 :
		break;
		default :
			F_menu();
	}
}

int main()
{
	F_menu();
}
