#include<stdio.h>
#include<stdlib.h>

void t_menu(float saldo, float poupanca, float limite, float limite_sistema);
void t_menu_poupanca(float saldo,float poupanca, float limite, float limite_sistema);

float t_usuario()
{
	float valor;
	printf("Digite o valor: ");
	scanf("%f", &valor);
	return valor;
}

float t_deposito(float saldo, float poupanca, float limite, float limite_sistema)
{
	float valor, resto;
	valor = t_usuario();
	if(valor > 0)
	{
		if(limite > 0)
		{
			if(valor <= limite)
			{
				limite = limite - valor;
			}
			else
			{
				resto = valor - limite;
				limite = 0;
				saldo = saldo + resto;
			}
		}
		else
		{
			saldo = saldo + valor;
		}
		
	}
	t_menu(saldo, poupanca, limite, limite_sistema);
}

float t_depositoP(float saldo, float poupanca, float limite, float limite_sistema)
{
	float valor = t_usuario();
	if(valor <= saldo)
	{
		saldo = saldo - valor;
		poupanca = poupanca + valor;
		printf("OPERACAO REALIZADO COM SUCESSO!\n\n");
		system("PAUSE");
	}
	else
	{
		printf("OPERACAO NAO AUTORIZADO!\n\n");
		system("PAUSE");
	}
	t_menu_poupanca(saldo, poupanca, limite, limite_sistema);
}

void t_saque(float saldo, float poupanca, float limite, float limite_sistema)
{
	float valor = t_usuario();
	float resto;
	if(valor <= saldo)
	{
		saldo = saldo - valor;
	}
	else
	{
		if(valor <= (saldo + (limite_sistema - limite)))
		{
			resto = valor - saldo;
			saldo = 0;
			limite = limite + resto;
		}
		else
		{
			printf("OPERACAO NAO AUTORIZADO!\n\n");
			system("PAUSE");
		}
	}
	t_menu(saldo, poupanca, limite, limite_sistema);
}

float t_saqueP(float saldo, float poupanca, float limite, float limite_sistema)
{
	float valor = t_usuario();
	if(valor <= poupanca)
	{
		saldo = saldo + valor;
		poupanca = poupanca - valor;
		printf("OPERACAO REALIZADO COM SUCESSO!\n\n");
		system("PAUSE");
	}
	else
	{
		printf("OPERACAO NAO AUTORIZADO!\n\n");
		system("PAUSE");
	}
	t_menu_poupanca(saldo, poupanca, limite, limite_sistema);
}

void t_limite(float saldo, float poupanca, float limite, float limite_sistema)
{
	printf("LIMITE APROVADO: %.2f\n", limite_sistema);
	printf("LIMITE USADO: %.2f\n", limite);
	printf("LIMITE DISPONIVEL: %.2f\n\n", limite_sistema - limite);
	system("PAUSE");
	t_menu(saldo, poupanca, limite, limite_sistema);
}

void t_saldo(float saldo, float poupanca, float limite, float limite_sistema)
{
	printf("SALDO: %.2f\n\n", saldo);
	system("PAUSE");
	t_menu(saldo, poupanca, limite, limite_sistema);
}

void t_saldoP(float saldo,float poupanca, float limite, float limite_sistema)
{
	printf("PUPANCA: %.2f\n\n", poupanca);
	system("PAUSE");
	t_menu_poupanca(saldo, poupanca, limite, limite_sistema);
}

void t_menu_emprestimo(float saldo,float poupanca, float limite, float limite_sistema)
{
	system("CLS");
	int opcao;
	printf("EMPRESTIMO\n\n\n");
	printf("1 - NOVO\n");
	printf("2 - MEUS EMPRESTIMOS\n");
	printf("3 - PAGAR\n");
	printf("4 - EXTRATO\n");
	printf("0 - MENU PRINCIPAL\n");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 0:
			t_menu(saldo, poupanca, limite, limite_sistema);
		case 1:
			t_saldoP(saldo, poupanca, limite, limite_sistema);
			break;
		case 2:
			t_saqueP(saldo, poupanca, limite, limite_sistema);
			break;
		case 3:
			t_depositoP(saldo, poupanca, limite, limite_sistema);
			break;
		default:
			break;
	}
}


void t_menu_poupanca(float saldo,float poupanca, float limite, float limite_sistema)
{
	system("CLS");
	int opcao;
	printf("POUPANCA\n\n\n");
	printf("1 - SALDO\n");
	printf("2 - SAQUE\n");
	printf("3 - DEPOSITO\n");
	printf("0 - MENU PRINCIPAL\n");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 0:
			t_menu(saldo, poupanca, limite, limite_sistema);
		case 1:
			t_saldoP(saldo, poupanca, limite, limite_sistema);
			break;
		case 2:
			t_saqueP(saldo, poupanca, limite, limite_sistema);
			break;
		case 3:
			t_depositoP(saldo, poupanca, limite, limite_sistema);
			break;
		default:
			break;
	}
}

void t_menu(float saldo,float poupanca, float limite, float limite_sistema)
{
	system("CLS");
	int opcao;
	printf("BANCO\n\n\n");
	printf("1 - SALDO\n");
	printf("2 - SAQUE\n");
	printf("3 - DEPOSITO\n");
	printf("4 - POUPANCA\n");
	printf("5 - LIMITE DISPONIVEL\n");
	printf("0 - SAIR\n");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 0:
			printf("\n\n VOLTE SEMPRE!");
			break;
		case 1:
			t_saldo(saldo, poupanca, limite, limite_sistema);
			break;
		case 2:
			t_saque(saldo, poupanca, limite, limite_sistema);
			break;
		case 3:
			t_deposito(saldo, poupanca, limite, limite_sistema);
			break;
		case 4:
			t_menu_poupanca(saldo, poupanca, limite, limite_sistema);
			break;
		case 5:
			t_limite(saldo, poupanca, limite, limite_sistema);
		default:
			break;
	}
}

int main()
{
	float saldo = 0;
	float poupanca = 0;
	float limite_sistema = 250;
	float limite = 0;
	
	t_menu(saldo, poupanca, limite, limite_sistema);
}
