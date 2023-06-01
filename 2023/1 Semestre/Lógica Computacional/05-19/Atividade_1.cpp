#include<stdio.h>
#include<stdlib.h>

void F_menu();
void F_cadastrar();
void F_consultar();

char marca[10][10];
char modelo[10][10];
int ano[10];
float valor_novo[10];
float valor_atual[10];
float ipva[10];
float seguro[10];
int qtd = 0;

void F_valor_atual(int posicao)
{
	int idade;
	valor_atual[posicao] = valor_novo[posicao];
	for(idade = 2023 ; idade > ano[posicao] ; idade--)
	{
		valor_atual[posicao] = valor_atual[posicao] * 0.90;
	}
	if(valor_atual[posicao] < (valor_novo[posicao] * 0.20))
	{
		valor_atual[posicao] = valor_novo[posicao] * 0.20;
	}
	ipva[posicao] = valor_atual[posicao] * 0.10;
	seguro[posicao] = valor_atual[posicao] * 0.05;
}

void F_cadastrar()
{
	
	system("CLS");
	printf("CADSATRO\n\n\n");
	printf("Digite a marca: ");
	scanf("%s", &marca[qtd]);
	printf("Digite a modelo: ");
	scanf("%s", &modelo[qtd]);
	printf("Digite o ano de fabricacao: ");
	scanf("%d", &ano[qtd]);
	printf("Digite o valor novo: ");
	scanf("%f", &valor_novo[qtd]);
	
	F_valor_atual(qtd);
	
	qtd++;
	F_menu();
}

int F_pergunta()
{
	int resposta;
	printf("Deseja alterar?\n");
	printf("1 - SIM\n");
	printf("0 - NAO\n");
	scanf("%d", &resposta);
	return resposta;
}

void F_editar()
{
	int editar;
	system("CLS");
	F_consultar();
	printf("Selecione a opcao para editar: ");
	scanf("%d", &editar);
	
	printf("Marca: %s\n", marca[editar]);
	if(F_pergunta() == 1)
	{
		printf("Digite a marca: ");
		scanf("%s", &marca[editar]);
	}
	printf("Modelo: %s\n", modelo[editar]);
	if(F_pergunta() == 1)
	{
		printf("Digite a modelo: ");
		scanf("%s", &modelo[editar]);
	}
	
	printf("Ano de fabricacao: %d\n", ano[editar]);
	if(F_pergunta() == 1)
	{
		printf("Digite o ano de fabricacao: ");
		scanf("%d", &ano[editar]);
	}
	printf("Valor novo: %.3f\n", valor_novo[editar]);
	if(F_pergunta() == 1)
	{
		printf("Digite o valor novo: ");
		scanf("%f", &valor_novo[editar]);
	}
	F_valor_atual(editar);

	F_menu();
	
}
void F_consultar()
{
	int listar = 0;
	system("CLS");
	while(listar < qtd)
	{
		printf("[%d] MODELO: %s -> NOME: %s -> ANO: %d -> V.NOVO: %.3f -> V.ATUAL: %.3f ",listar, marca[listar], modelo[listar], ano[listar], valor_novo[listar], valor_atual[listar]);
		if(((2023 - ano[listar]) >= 15) && ((2023 - ano[listar]) < 20))
		{
			printf("IPVA: INPISPONIVEL -> SEGURO: %.3f\n", seguro[listar]);
		}
		else if((2023 - ano[listar]) > 20)
		{
			printf("IPVA: INPISPONIVEL -> SEGURO: INDISPONIVEL\n");
		}
		else
		{
			printf("IPVA: %.3f -> SEGURO: %.3f\n", ipva[listar], seguro[listar]);
		}	
		listar++;
	}

}

void F_menu()
{
	int op;
	system("CLS");
	printf("MENU\n\n\n");
	printf("1 - CADASTRAR\n");
	printf("2 - CONSULTAR\n");
	printf("3 - EDITAR\n");
	printf("0 - SAIR\n");
	scanf("%d", &op);
	switch(op)
	{
		case 0 :
		break;
		case 1 :
			F_cadastrar();
		break;
		case 2 :
			F_consultar();
			printf("\n\n\n");
			system("PAUSE");
			F_menu();
		break;
		case 3:
			F_editar();
		break;
		default :
			F_menu();
		break;
	}
}

int main()
{
	F_menu();
}
