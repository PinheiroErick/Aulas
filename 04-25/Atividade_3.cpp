#include<stdio.h>
#include<stdlib.h>

int tela_menu();

float num[10];
int qtd = 0;
float total, media, troco;

int tela_dinheiro()
{
	printf("Digite um valor: ");
	scanf("%f", &num[qtd]);
	
	return num[qtd];
}

int c_troco()
{
	troco = total - tela_dinheiro();
	printf("Troco: %.2f\n", troco);
	tela_menu();
}

int novo()
{

	total = total + tela_dinheiro();
	
	qtd = qtd + 1;
	
	tela_menu();
}

int tela_menu()
{
	int op_menu;
	
	printf("MENU\n\n\n");
	printf("1 - Novo Numero\n");
	printf("2 - Troco\n");
	printf("0 - SAIR\n");
	scanf("%d", &op_menu);
	
	if(op_menu == 0)
	{
		
	}
	else if(op_menu == 1)
	{
		novo();
	}
	else if(op_menu == 2)
	{
		c_troco();
	}
}

int main()
{

	tela_menu();
}
