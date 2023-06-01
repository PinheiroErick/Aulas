#include<stdio.h>
#include<stdlib.h>

void F_menu();
void F_p_menu();
void F_c_menu();
void L_cliente();
void L_produto();
void F_c_cadastrar();
void F_p_cadastrar();
void F_pedidos_menu();



char c_nome[100][10];
int c_qtd = 0;

char p_nome[100][10];
float p_valor[100];
int p_estoque[100];
int p_qtd = 0;

int pedido[10];// armazena o numero do pedido
int pedido_cliente[10]; //armazena o cliente do pedido
int pedido_item[10][100]; // armazena [numero pedido] [numero do item]
int pedido_item_quantidade[10][100]; // armazena [numero pedido] [quantidade item]
int pedido_item_qtd[10]; // armazena quantidade de item no pedido
int pedido_qtd = 0; // armazena a quantidade de pedidos

int F_pergunta()
{
	int op;
	
	printf("[1] SIM\n");
	printf("[0] NAO\n");
	scanf("%d", &op);
	
	return op;
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

// TODAS Funcoes de CLIENTES
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

// TODAS Funcoes de PRODUTOS

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
			printf("Deseja alterar o nome: %s\n", p_nome[e]);
			if(F_pergunta() == 1)
			{
				printf("\nDigite o novo nome para: %s: ", p_nome[e]);
				scanf("%s", &p_nome[e]);
			}
			printf("Deseja alterar o valor[%.3f] para: %s\n", p_valor[e], p_nome[e]);
			if(F_pergunta() == 1)
			{
				printf("\nDigite o novo valor[%.3f] para: %s: ", p_valor[e], p_nome[e]);
				scanf("%f", &p_valor[e]);
			}
			printf("Deseja alterar o estoque[%d] para: %s:\n", p_estoque[e], p_nome[e]);
			if(F_pergunta() == 1)
			{
				printf("\nDigite o novo estoque[%d] para: %s: ", p_estoque[e], p_nome[e]);
				scanf("%d", &p_estoque[e]);
			}
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

// TODAS Funcoes de PEDIDOS

void F_pedido_editar(int pedido_qtd)
{
	system("CLS");
	printf("PEDIDO: [%d] CLIENTE: [%s]\n\n\n", pedido_qtd, c_nome[pedido_cliente[pedido_qtd]]);
	system("PAUSE");
	F_pedidos_menu();
}

void F_pedidos_cadastrar()
{
	system("CLS");
	int e;
	L_cliente();
	printf("\n\n");
	printf("Digite o cliente que deseja criar o pedido: ");
	scanf("%d", &pedido_cliente[pedido_qtd]);
	pedido_qtd++;
	system("CLS");
	printf("Pedido criado\n");
	printf("Abrir o pedido?\n");
	int op = F_pergunta();
	switch(op)
	{
		case 0:
			F_pedidos_menu();
		break;
		case 1:
			F_pedido_editar((pedido_qtd - 1));
		break;
	}
}

// TODAS funcoes de MENU
void F_pedidos_menu()
{
	system("CLS");
	int op;
	
	printf("MENU PEDIDOS\n\n\n");
	printf("[1] - CADASTRAR\n");
	printf("[2] - EDITAR\n");
	printf("[3] - LISTAR\n");
	printf("[4] - FECHAR PEDIDO\n");
	printf("[0] - VOLTAR\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 0:
			F_menu();
		break;
		case 1: 
			F_pedidos_cadastrar();
		break;
		case 2:
			//F_pedidos_listar_editar();
		break;
		case 3:
			//L_pedidos();
			system("PAUSE");
			printf("\n\n\n");
			system("CLS");
			F_p_menu();
		break;
		case 4:
			//L_pedidos();
			system("PAUSE");
			printf("\n\n\n");
			system("CLS");
			F_p_menu();
		break;
		default:
			F_pedidos_menu();
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
			F_pedidos_menu();
		break;
		default:
			F_menu();
		break;
	}
}

// Funcao principal
int main()
{
	F_menu();
}
