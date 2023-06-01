#include<stdio.h>
#include<stdlib.h>

void tela_menu(float saldo, float limite, float poupanca);
void tela_menu_poupanca(float saldo, float limite, float poupanca);

void ver_saldo(float saldo, float limite, float poupanca)
{
	printf("Saldo: %2.f", saldo);
	printf("\n\n");
	system("PAUSE");
	tela_menu(saldo,limite,poupanca);
}

void ver_saldo_P(float saldo, float limite, float poupanca)
{
	printf("Saldo: %2.f", poupanca);
	printf("\n\n");
	system("PAUSE");
	tela_menu_poupanca(saldo,limite,poupanca);
}

float tela_dinheiro()
{
	float valor;
	printf("Digite um valor: ");
	scanf("%f", &valor);
	
	return valor;
}

void deposito(float saldo, float limite, float poupanca)
{
	saldo = saldo + tela_dinheiro();		
	tela_menu(saldo,limite,poupanca);
}

void deposito_P(float saldo, float limite, float poupanca)
{
	float valor = tela_dinheiro();
	if(valor <= saldo)
	{
		saldo = saldo - valor;
		poupanca = poupanca + valor;
	}
	else
	{
		printf("OPERACAO NAO AUTORIZADA!\n\n");
		system("PAUSE");
	}
			
	tela_menu_poupanca(saldo,limite,poupanca);
}

void saque(float saldo, float limite, float poupanca)
{

	saldo = saldo - tela_dinheiro();
	tela_menu(saldo,limite,poupanca);
}

void saque_P(float saldo, float limite, float poupanca)
{
	float valor = tela_dinheiro();
	if(valor <= poupanca)
	{
		saldo = saldo + valor;
		poupanca = poupanca - valor;
	}
	else
	{
		printf("OPERACAO NAO AUTORIZADA!\n\n");
		system("PAUSE");
	}
	tela_menu_poupanca(saldo,limite,poupanca);
}

void tela_menu_poupanca(float saldo, float limite, float poupanca)
{
	system("CLS");
	int op_menu;
	
	printf("POUPANCA\n\n\n");
	printf("1 - SAQUE\n");
	printf("2 - DEPOSITO\n");
	printf("3 - SALDO\n");
	printf("0 - VOLTAR\n");
	scanf("%d", &op_menu);
	if(op_menu == 0)
	{
		tela_menu(saldo,limite,poupanca);
	}
	else if(op_menu == 1)
	{
		saque_P(saldo,limite,poupanca);
	}
	else if(op_menu == 2)
	{
		deposito_P(saldo,limite,poupanca);
	}
	else if(op_menu == 3)
	{
		ver_saldo_P(saldo,limite,poupanca);
	}
}

void tela_menu(float saldo, float limite, float poupanca)
{

	system("CLS");
	int op_menu;
	
	printf("BANCO\n\n\n");
	printf("1 - SAQUE\n");
	printf("2 - DEPOSITO\n");
	printf("3 - SALDO\n");
	printf("4 - POUPANCA\n");
	printf("5 - LIMITE\n");
	printf("0 - SAIR\n");
	scanf("%d", &op_menu);
	
	if(op_menu == 0)
	{
		
	}
	else if(op_menu == 1)
	{
		saque(saldo,limite,poupanca);
	}
	else if(op_menu == 2)
	{
		deposito(saldo,limite,poupanca);
	}
	else if(op_menu == 3)
	{
		ver_saldo(saldo,limite,poupanca);
	}	
	else if(op_menu == 4)
	{
		tela_menu_poupanca(saldo,limite,poupanca);
	}	
	else if(op_menu == 5)
	{
		ver_saldo(saldo,limite,poupanca);
	}
}

int main()
{
	float saldo = 0;
	float limite = 0;
	float poupanca = 0;
	tela_menu(saldo,limite,poupanca);
}
