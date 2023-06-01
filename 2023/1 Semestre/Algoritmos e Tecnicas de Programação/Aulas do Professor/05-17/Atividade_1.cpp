#include<stdio.h>
#include<stdlib.h>

void F_menu();

char nome[10][20];
int idade[10];
float salario[10];
int qtd = 0;

void F_cadastro()
{
	system("CLS");
	printf("CADASTRO\n\n\n");
	printf("Digite o nome: ");
	scanf("%s", &nome[qtd]);
	printf("Digite a idade: ");
	scanf("%d", &idade[qtd]);
	printf("Digite o salario: ");
	scanf("%f", &salario[qtd]);
	
	qtd++;
	F_menu();
}

void L_todos()
{
	int listar = 0;
	system("CLS");
	
	while(listar < qtd)
	{
		printf("%d | NOME: %s | IDADE: %d | SALARIO: %.3f\n",listar, nome[listar], idade[listar], salario[listar]);
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();	
}

void L_Menor_Idade()
{
	int listar = 0;
	system("CLS");
	
	while(listar < qtd)
	{
		if(idade[listar] < 18)
		{
			printf("%d | NOME: %s | IDADE: %d | SALARIO: %.3f\n",listar, nome[listar], idade[listar], salario[listar]);
		}
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();	
}

void L_Idade_Intermediario()
{
	int listar = 0;
	system("CLS");
	
	while(listar < qtd)
	{
		if((idade[listar] >= 18) && (idade[listar] < 60))
		{
			printf("%d | NOME: %s | IDADE: %d | SALARIO: %.3f\n",listar, nome[listar], idade[listar], salario[listar]);
		}
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();	
}

void L_Maior_Idade()
{
	int listar = 0;
	system("CLS");
	
	while(listar < qtd)
	{
		if(idade[listar] >= 60)
		{
			printf("%d | NOME: %s | IDADE: %d | SALARIO: %.3f\n",listar, nome[listar], idade[listar], salario[listar]);
		}
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();	
}
void L_Menor_Salario()
{
	int listar = 0;
	system("CLS");
	
	while(listar < qtd)
	{
		if(salario[listar] <= 1.300)
		{
			printf("%d | NOME: %s | IDADE: %d | SALARIO: %.3f\n",listar, nome[listar], idade[listar], salario[listar]);
		}
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();	
}
void L_Salario_Intermediario()
{
	int listar = 0;
	system("CLS");
	
	while(listar < qtd)
	{
		if((salario[listar] > 1.300) && (salario[listar] <= 13.000))
		{
			printf("%d | NOME: %s | IDADE: %d | SALARIO: %.3f\n",listar, nome[listar], idade[listar], salario[listar]);
		}
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();	
}
void L_Maior_Salario()
{
	int listar = 0;
	system("CLS");
	
	while(listar < qtd)
	{
		if(salario[listar] > 13.000)
		{
			printf("%d | NOME: %s | IDADE: %d | SALARIO: %.3f\n",listar, nome[listar], idade[listar], salario[listar]);
		}
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();	
}
void F_menu()
{
	int menu;
	system("CLS");
	
	printf("MENU\n\n");
	printf("1 - CADASTRO\n");
	printf("2 - LISTAR TODOS\n");
	printf("3 - LISTAR MENOR 18\n");
	printf("4 - LISTAR MAIOR 60\n");
	printf("5 - LISTAR SALARIO MINIMO\n");
	printf("6 - LISTAR SALARIO MAXIMO\n");
	printf("7 - LISTAR IDADE INTERMEDIARIA\n");
	printf("8 - LISTAR SALARIO INTERMEDIARIO\n");
	printf("0 - SAIR\n");
	scanf("%d", &menu);
	
	switch(menu)
	{
		case 0 : 
		break;
		case 1 :
			F_cadastro();
		break;
		case 2 :
			L_todos();
		break;
		case 3 :
			L_Menor_Idade();
		break;
		case 4 :
			L_Maior_Idade();
		break;
		case 5 :
			L_Menor_Salario();
		break;
		case 6 :
			L_Maior_Salario();
		break;
		case 7 :
			L_Idade_Intermediario();
		break;
		case 8 :
			L_Salario_Intermediario();
		break;
		default :
			F_menu();
		break;
	}
}

int main()
{
	F_menu();
}

