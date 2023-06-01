#include<stdio.h>
#include<stdlib.h>

void F_menu();
void F_cadastro();
void F_consulta();

int minimo = 10;
int padrao = 30;
 
char nome[10][10];
float v_custo[10];
float v_venda[10];
int estoque[10];
int qtd = 0;

void F_cadastro()
{
	printf("Digite o nome: \n");
	scanf("%s", &nome[qtd]);
	printf("Digite o estoque: \n");
	scanf("%d", &estoque[qtd]);
	printf("Digite o valor de custo: \n");
	scanf("%f", &v_custo[qtd]);
	printf("Digite o valor de venda: \n");
	scanf("%f", &v_venda[qtd]);
		
	qtd++;
	F_menu();
}

void C_todos()
{
	int listar = 0;
	
	while(listar < qtd)
	{
		printf("%d NOME: %s | ESTOQUE: %d | CUSTO: %.2f | VENDA %.2f \n", listar, nome[listar], estoque[listar], v_custo[listar], v_venda[listar]);
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void C_minimo()
{
	int listar = 0;
	
	while(listar < qtd)
	{
		if(estoque[listar] <= minimo)
		{
			printf("%d NOME: %s | ESTOQUE: %d | VENDA %.2f \n", listar, nome[listar], estoque[listar], v_venda[listar]);
		}
		listar++;
	}
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void C_comprar()
{
	system("CLS");
	int listar = 0;
	int qtd_comprar;
	float sub, total;
	while(listar < qtd)
	{
		qtd_comprar = 0, sub = 0;
		if(estoque[listar] <= minimo)
		{
			qtd_comprar = padrao - estoque[listar];
			sub = qtd_comprar * v_custo[listar];
			total = total + sub;
			printf("%d NOME: %s | ESTOQUE: %d | COMPRAR %d | SUB: %.2f\n", listar, nome[listar], estoque[listar], qtd_comprar, sub);
		}
		listar++;
	}
	printf("\n\nTOTAL da COMPRA: %.2f\n", total);
	printf("\n\n\n");
	system("PAUSE");
	F_menu();
}

void F_menu()
{
	int opcao;
	system("CLS");
	printf("MENU\n\n\n");
	printf("1 - CADASTRAR\n");
	printf("2 - CONSULTAR TODOS\n");
	printf("3 - ESTOQUE MINIMO\n");
	printf("4 - COMPRAR ESTOQUE\n");
	printf("0 - SAIR\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 0 :
		break;
		case 1 :
			F_cadastro();
		break;
		case 2 :
			C_todos();
		break;
		case 3 :
			C_minimo();
		break;
		case 4 :
			C_comprar();
		break;
		default :
			F_menu();
	}
}

int main()
{
	F_menu();
}
