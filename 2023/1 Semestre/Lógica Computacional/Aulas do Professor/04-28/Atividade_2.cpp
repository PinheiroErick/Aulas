#include<stdio.h>
#include<stdlib.h>

void t_menu(float saldo, float poupanca);
void t_menu_poupanca(float saldo,float poupanca);

float t_usuario()
{
	float valor;
	printf("Digite o valor: ");
	scanf("%f", &valor);
	return valor;
}

float t_deposito(float saldo, float poupanca)
{
	saldo = saldo + t_usuario();
	t_menu(saldo, poupanca);
}

float t_depositoP(float saldo, float poupanca)
{
	if(t_usuario() <= saldo)
	{
		saldo = saldo - t_usuario();
		poupanca = poupanca + t_usuario();
		printf("OPERACAO REALIZADO COM SUCESSO!\n\n");
		system("PAUSE");
	}
	else
	{
		printf("OPERACAO NAO AUTORIZADO!\n\n");
		system("PAUSE");
	}
	t_menu_poupanca(saldo, poupanca);
}

void t_saque(float saldo, float poupanca)
{
	saldo = saldo - t_usuario();
	t_menu(saldo,poupanca);
}

float t_saqueP(float saldo, float poupanca)
{
	if(t_usuario() <= poupanca)
	{
		saldo = saldo + t_usuario();
		poupanca = poupanca - t_usuario();
		printf("OPERACAO REALIZADO COM SUCESSO!\n\n");
		system("PAUSE");
	}
	else
	{
		printf("OPERACAO NAO AUTORIZADO!\n\n");
		system("PAUSE");
	}
	t_menu_poupanca(saldo, poupanca);
}

void t_saldo(float saldo, float poupanca)
{
	printf("SALDO: %.2f\n\n", saldo);
	system("PAUSE");
	t_menu(saldo,poupanca);
}

void t_saldoP(float saldo,float poupanca)
{
	printf("PUPANCA: %.2f\n\n", poupanca);
	system("PAUSE");
	t_menu_poupanca(saldo, poupanca);
}

void t_menu_poupanca(float saldo,float poupanca)
{
	system("CLS");
	int opcao;
	printf("POUPANCA\n\n\n");
	printf("1 - SALDO\n");
	printf("2 - SAQUE\n");
	printf("3 - DEPOSITO\n");
	printf("0 - SAIR\n");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			t_saldoP(saldo, poupanca);
			break;
		case 2:
			t_saqueP(saldo, poupanca);
			break;
		case 3:
			t_depositoP(saldo, poupanca);
			break;
		default:
			break;
	}
}

void t_menu(float saldo,float poupanca)
{
	system("CLS");
	int opcao;
	printf("BANCO\n\n\n");
	printf("1 - SALDO\n");
	printf("2 - SAQUE\n");
	printf("3 - DEPOSITO\n");
	printf("4 - POUPANCA\n");
	printf("0 - SAIR\n");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			t_saldo(saldo, poupanca);
			break;
		case 2:
			t_saque(saldo, poupanca);
			break;
		case 3:
			t_deposito(saldo, poupanca);
			break;
		case 4:
			t_menu_poupanca(saldo, poupanca);
			break;
		default:
			break;
	}
}

int main()
{
	float saldo = 0;
	float poupanca = 0;
	
	t_menu(saldo,poupanca);
}
