#include<stdio.h>
#include<stdlib.h>

void t_menu(float saldo);

float t_usuario()
{
	float valor;
	printf("Digite o valor: ");
	scanf("%f", &valor);
	return valor;
}

float t_deposito(float saldo)
{
	saldo = saldo + t_usuario();
	t_menu(saldo);
}

void t_saque(float saldo)
{
	saldo = saldo - t_usuario();
	t_menu(saldo);
}

void t_saldo(float saldo)
{
	printf("SALDO: %.2f\n\n", saldo);
	system("PAUSE");
	t_menu(saldo);
}

void t_menu(float saldo)
{
	system("CLS");
	int opcao;
	printf("BANCO\n\n\n");
	printf("1 - SALDO\n");
	printf("2 - SAQUE\n");
	printf("3 - DEPOSITO\n");
	printf("0 - SAIR\n");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			t_saldo(saldo);
			break;
		case 2:
			t_saque(saldo);
			break;
		case 3:
			t_deposito(saldo);
			break;
		default:
			break;
	}
}

int main()
{
	float saldo = 0;
	
	t_menu(saldo);
}
