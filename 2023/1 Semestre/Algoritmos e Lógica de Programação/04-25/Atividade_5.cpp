#include<stdio.h>
#include<stdlib.h>

int tela_menu(float saldo);

int ver_saldo(float saldo)
{
	printf("Saldo: %2.f", saldo);
	tela_menu(saldo);
}

int tela_dinheiro()
{
	float valor;
	printf("Digite um valor: ");
	scanf("%f", &valor);
	
	return valor;
}

int deposito(float saldo)
{
	saldo = saldo + tela_dinheiro();
		
	tela_menu(saldo);
}

int saque(float saldo)
{

	saldo = saldo - tela_dinheiro();
		
	tela_menu(saldo);
}

int tela_menu(float saldo)
{
	int op_menu;
	
	printf("BANCO\n\n\n");
	printf("1 - SAQUE\n");
	printf("2 - DEPOSITO\n");
	printf("3 - SALDO\n");
	printf("0 - SAIR\n");
	scanf("%d", &op_menu);
	
	if(op_menu == 0)
	{
		
	}
	else if(op_menu == 1)
	{
		saque(saldo);
	}
	else if(op_menu == 2)
	{
		deposito(saldo);
	}
	else if(op_menu == 3)
	{
		ver_saldo(saldo);
	}
}

int main()
{
	float saldo = 0;
	tela_menu(saldo);
}
