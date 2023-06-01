#include<stdio.h>
#include<stdlib.h>

int tela_menu();

int num[10];
int qtd = 0;
float total;
float media;

int c_media()
{
	media = total/qtd;
	printf("Media: %.2f\n", media);
	tela_menu();
}

int novo()
{
	printf("Digite um numero: ");
	scanf("%d", &num[qtd]);
	total = total + num[qtd];
	
	qtd = qtd + 1;
	
	tela_menu();
}

int tela_menu()
{
	int op_menu;
	
	printf("MENU\n\n\n");
	printf("1 - Novo Numero\n");
	printf("2 - Media\n");
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
		c_media();
	}
}

int main()
{

	tela_menu();
}
