#include<stdio.h>
#include<stdlib.h>

// Variaveis globais -> Todas funcoes tem acesso!
int opcao;

void add2()
{
	printf("oi");
}

int menu()
{
	system("CLS");
	printf("Menu\n\n");
	printf("1- Adicionar 2 numeros\n");
	printf("2- Somar\n");
	printf("3- Subtrair\n");
	printf("4- Multiplicar\n");
	printf("5- Dividir\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1: 
			add2();
			
			break;
			
		default :
			printf("Opcao Invalida!");
		
	}
	
}

int main()
{
	menu();
	
}
