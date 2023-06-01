#include<stdio.h>
#include<stdlib.h>

void F_menu();

char p_nome[10][20];
float p_raio[10];
float p_altura[10];
float p_volume[10];
int p_qtd=0;
int p_listar = 0;

void F_listar()
{
	while(p_listar < p_qtd)
	{
		printf("NOME: %s -> RAIO: %.3f -> ALTURA: %.3f -> VOLUME: %.3f", p_nome[p_listar],p_raio[p_listar],p_altura[p_listar],p_volume[p_listar]);
		p_listar++;
	}
}
float F_volume()
{
	float volume;
	volume = 3.14159 * (p_raio[p_qtd] * p_raio[p_qtd]) * p_altura[p_qtd];
	return volume;
}

void F_nome()
{
	printf("Digite um nome: ");
	scanf("%s", &p_nome[p_qtd]);
}
char F_decimal()
{
	float valor;
	printf("Digite um valor: ");
	scanf("%f", &valor);
	return valor;
}

void F_novo()
{
	F_nome();
	p_raio[p_qtd] = F_decimal();
	p_altura[p_qtd] = F_decimal();
	p_volume[p_qtd] = F_volume();
	p_qtd++;
	F_menu();
	
}

void F_menu()
{
	int opcao;
	printf("MENU \n\n");
	printf("1 - NOVO\n");
	printf("2 - LISTAR VOLUMES\n");
	printf("0 - SAIR\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			F_novo();
			break;
		case 2:
			F_listar();
			break;
		default:
			break;
	}
}

int main()
{

	
	F_menu();
}

