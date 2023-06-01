#include<stdio.h>
#include<stdlib.h>

void F_menu();
void F_p_menu();
void F_c_menu();
void L_cliente();
void L_produto();
void F_c_cadastrar();
void F_p_cadastrar();

char c_nome[100][10];
int c_qtd = 0;

char p_nome[100][10];
float p_valor[100];
int p_estoque[100];
int p_qtd = 0;
int F_pergunta()
{
	int op;
	
	printf("[1] SIM\n");
	printf("[0] NAO\n");
	scanf("%d", &op);
	
	return op;
}

void E_cliente()
{
	int e;
	L_cliente();
	printf("\n\n");
	printf("Digite o cliente que deseja alterar: ");
	scanf("%d", &e);
	
	printf("Deseja alterar o nome: %s\n", c_nome[e]);
	int op = F_pergunta();
	
	switch(op)
	{
		case 0:
			F_c_menu();
		break;
		case 1:
			printf("Digite o novo nome para: %s: ", c_nome[e]);
			scanf("%s", &c_nome[e]);
			system("CLS");
			
			printf("Novo Cadastro?\n");
			int op = F_pergunta();
			switch(op)
			{
				case 0:
					F_c_menu();
				break;
				case 1:
					F_c_cadastrar();
				break;
			}

		break;
	}
}

void E_produto()
{
	int e;
	L_produto();
	printf("\n\n");
	printf("Digite o produto que deseja alterar: ");
	scanf("%d", &e);
	
	printf("Deseja alterar o produto: %s\n", p_nome[e]);
	int op = F_pergunta();
	
	switch(op)
	{
		case 0:
			F_p_menu();
		break;
		case 1:
			printf("Digite o novo nome para: %s: ", p_nome[e]);
			scanf("%s", &p_nome[e]);
			printf("Digite o novo valor[%.3f] para: %s: ", p_valor[e], p_nome[e]);
			scanf("%f", &p_valor[e]);
			printf("Digite o novo estoque[%d] para: %s: ", p_estoque[e], p_nome[e]);
			scanf("%d", &p_estoque[e]);
			system("CLS");
			
			printf("Novo Cadastro?\n");
			int op = F_pergunta();
			switch(op)
			{
				case 0:
					F_p_menu();
				break;
				case 1:
					F_p_cadastrar();
				break;
			}

		break;
	}
}

void L_cliente()
{
	int l = 0;
	system("CLS");
	printf("Lista de clientes\n\n\n");
	while(l < c_qtd)
	{
		printf("[%d] %s\n", l , c_nome[l]);
		l++;
	}
}

void L_produto()
{
	int l = 0;
	system("CLS");
	printf("Lista de produtos\n\n\n");
	while(l < p_qtd)
	{
		printf("[%d] %s -> R$%.2f -> QTD: %d\n", l , p_nome[l],p_valor[l],p_estoque[l]);
		l++;
	}
}

void F_c_cadastrar()
{
	system("CLS");
	printf("Digite o nome: ");
	scanf("%s", &c_nome[c_qtd]);
	c_qtd++;
	
	system("CLS");
	printf("Novo Cadastro?\n");
	int op = F_pergunta();
	switch(op)
	{
		case 0:
			F_menu();
		break;
		case 1:
			F_c_cadastrar();
		break;
	}
}

void F_p_cadastrar()
{
	system("CLS");
	printf("Digite o nome: ");
	scanf("%s", &p_nome[p_qtd]);
	printf("Digite o valor: ");
	scanf("%f", &p_valor[p_qtd]);
	printf("Digite o estoque: ");
	scanf("%d", &p_estoque[p_qtd]);
	p_qtd++;
	
	system("CLS");
	printf("Novo Cadastro?\n");
	int op = F_pergunta();
	switch(op)
	{
		case 0:
			F_p_menu();
		break;
		case 1:
			F_p_cadastrar();
		break;
	}
}

void F_sair()
{
	system("CLS");
	printf("Deseja sair?\n");
	int op = F_pergunta();

	switch(op)
	{
		case 1:
		break;
		case 0:
			F_menu();
		break;
	}
}

void F_p_menu()
{
	system("CLS");
	int op;
	
	printf("MENU PRODUTOS\n\n\n");
	printf("[1] - CADASTRAR\n");
	printf("[2] - EDITAR\n");
	printf("[3] - LISTAR\n");
	printf("[0] - VOLTAR\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 0:
			F_menu();
		break;
		case 1: 
			F_p_cadastrar();
		break;
		case 2:
			E_produto();
		break;
		case 3:
			L_produto();
			system("PAUSE");
			printf("\n\n\n");
			system("CLS");
			F_p_menu();
		break;
		default:
			F_menu();
		break;
	}
}

void F_c_menu()
{
	system("CLS");
	int op;
	
	printf("MENU CLIENTES\n\n\n");
	printf("[1] - CADASTRAR\n");
	printf("[2] - EDITAR\n");
	printf("[3] - LISTAR\n");
	printf("[0] - VOLTAR\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 0:
			F_menu();
		break;
		case 1: 
			F_c_cadastrar();
		break;
		case 2:
			E_cliente();
		break;
		case 3:
			L_cliente();
			system("PAUSE");
			printf("\n\n\n");
			system("CLS");
			F_c_menu();
		break;
		default:
			F_menu();
		break;
	}
}

void F_menu()
{
	system("CLS");
	int op;
	
	printf("MENU\n\n\n");
	printf("[1] - CLIENTES\n");
	printf("[2] - PRODUTOS\n");
	printf("[3] - PEDIDOS\n");
	printf("[0] - SAIR\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 0:
			F_sair();
		break;
		case 1: 
			F_c_menu();
		break;
		case 2:
			F_p_menu();
		break;
		case 3:
			//F_pedidos_menu();
		break;
		default:
			F_menu();
		break;
	}
}

int main()
{
	F_menu();
}
