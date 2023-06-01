#include<stdio.h>
#include<stdlib.h>

void F_menu();
void F_cadastro();
void F_consulta();

char nome[10][10];
float salario[10];
int idade[10];
int qtd = 0;

void F_cadastro()
{
	printf("Digite o nome: \n");
	scanf("%s", &nome[qtd]);
	printf("Digite a idade: \n");
	scanf("%d", &idade[qtd]);
	printf("Digite o salario: \n");
	scanf("%f", &salario[qtd]);
		
	qtd++;
	F_menu();
}

void C_todos()
{
	int listar = 0;
	
	while(listar < qtd)
	{
		printf("%d NOME: %s | IDADE: %d | SALARIO %.3f \n", listar, nome[listar], idade[listar], salario[listar]);
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}


void C_Menor_Idade()
{
	int listar = 0;
	
	while(listar < qtd)
	{
	
		if(idade[listar] < 18)
		{
		printf("%d NOME: %s | IDADE: %d | SALARIO %.3f \n", listar, nome[listar], idade[listar], salario[listar]);
		}
		
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void C_Maior_Idade()
{
	int listar = 0;
	
	while(listar < qtd)
	{
	
		if(idade[listar] >= 60)
		{
		printf("%d NOME: %s | IDADE: %d | SALARIO %.3f \n", listar, nome[listar], idade[listar], salario[listar]);
		}
		
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void C_Maior_Salario()
{
	int listar = 0;
	
	while(listar < qtd)
	{
	
		if(salario[listar] >= 13.000)
		{
		printf("%d NOME: %s | IDADE: %d | SALARIO %.3f \n", listar, nome[listar], idade[listar], salario[listar]);
		}
		
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void C_Menor_Salario()
{
	int listar = 0;
	
	while(listar < qtd)
	{
	
		if(salario[listar] < 1.300)
		{
		printf("%d NOME: %s | IDADE: %d | SALARIO %.3f \n", listar, nome[listar], idade[listar], salario[listar]);
		}
		
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void C_Inter_Idade()
{
	int listar = 0;
	
	while(listar < qtd)
	{
	
		if((idade[listar] > 18) && (idade[listar] < 60))
		{
		printf("%d NOME: %s | IDADE: %d | SALARIO %.3f \n", listar, nome[listar], idade[listar], salario[listar]);
		}
		
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void C_Inter_Salario()
{
	int listar = 0;
	
	while(listar < qtd)
	{
	
		if((salario[listar] >= 1.300) && (salario[listar] < 13.000))
		{
		printf("%d NOME: %s | IDADE: %d | SALARIO %.3f \n", listar, nome[listar], idade[listar], salario[listar]);
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
	printf("2 - CONSULTAR TODOS\n");
	printf("3 - CONSULTAR MENOR DE 18\n");
	printf("4 - CONSULTAR ENTRE 18 E 60\n");
	printf("5 - CONSULTAR MAIOR DE 60\n");
	printf("6 - CONSULTAR MENOR DE 1 SALARIO\n");
	printf("7 - CONSULTAR ENTRE 1 E 10 SALARIOS\n");
	printf("8 - CONSULTAR MAIOR DE 10 SALARIOS\n");
	printf("9 - SAIR\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1 :
			F_cadastro();
		break;
		case 2 :
			C_todos();
		break;
		case 3 :
			C_Menor_Idade();
		break;
		case 4 :
			C_Inter_Idade();
		break;
		case 5 :
			C_Maior_Idade();
		break;
		case 6 :
			C_Menor_Salario();
		break;
		case 7 :
			C_Inter_Salario();
		break;
		case 8 :
			C_Maior_Salario();
		break;
		case 9 :
		break;
		default :
			F_menu();
	}
}

int main()
{
	F_menu();
}
