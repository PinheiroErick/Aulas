#include<stdio.h>
#include<stdlib.h>

void t_menu();

// Variaveis globais -> Todas funcoes tem acesso!
int n1,n2;

void inverte_num()
{
	int x= n1;
	
	n1 = n2;
	n2 = x;
	
	t_menu(); 
}

void div_num()
{
	int total = n1 / n2;
	
	printf("Divisao: %d\n\n", total);
	system("PAUSE");
	t_menu();
}

void mult_num()
{
	int total = n1 * n2;
	
	printf("Multiplicacao: %d\n\n", total);
	system("PAUSE");
	t_menu();
}

void sub_num()
{
	int total = n1 - n2;
	
	printf("Subtracao: %d\n\n", total);
	system("PAUSE");
	t_menu();
}

void soma_num()
{
	int total = n1 + n2;
	
	printf("Soma: %d\n\n", total);
	system("PAUSE");
	t_menu();
}

int add_num()
{
	int valor; // variavel local
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &valor);
	
	return valor; // retorna a variavel valor da funcao para quem chamou
}

void add2()
{
	n1 = add_num();
	n2 = add_num();
	t_menu();
}

void t_menu()
{
	int opcao;
		
	system("CLS");
	printf("Menu\n\n");
	printf("1- Adicionar 2 numeros\n");
	printf("2- Somar\n");
	printf("3- Subtrair\n");
	printf("4- Multiplicar\n");
	printf("5- Dividir\n");
	printf("6 - Inverter Numero\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1: 
			add2();			
			break;
		case 2:
			soma_num();
			break;
		case 3:
			sub_num();
			break;
		case 4:
			mult_num();
			break;
		case 5:
			div_num();
			break;
		case 6:
			inverte_num();
			break;
		default :
			printf("Opcao Invalida!");
		
	}
	
}

int main()
{
	t_menu();
	
}
