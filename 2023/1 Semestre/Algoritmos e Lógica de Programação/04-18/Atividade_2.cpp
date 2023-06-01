#include<stdio.h>
#include<stdlib.h>

int main()
{
	float valor[10];
	int qtd;
	float total;
	int menu;
	int repete = 1;
	float pago;
	float troco;
	int listar = 0;
	
	while(repete == 1)
	{
		printf("MENU \n\n");
		printf("1 - NOVO VALOR\n");
		printf("2 - FECHAR VENDA\n");
		printf("3 - LISTAR VALORES\n");
		printf("0 - SAIR\n");
		printf("Digite e tecle enter\n\n");
		scanf("%d", &menu);
		
		if(menu == 0)
		{
			repete = 0;
		}
		else if(menu == 1)
		{
			system("CLS");
			printf("Digite um valor\n");
			scanf("%f", &valor[qtd]);
			total = total + valor[qtd];
			qtd = qtd + 1;
			system("CLS");
		}
		else if(menu == 2)
		{
			while(pago < total)
			{
				system("CLS");
				printf("TOTAL da COMPRA: %.2f\n\n",total);
				printf("Digite o valor pago:\n");
				scanf("%f", &pago);
				
				if(pago >= total)
				{
				
					troco = total - pago;
					system("CLS");
					printf("TOTAL: %.2f\n", total);
					printf("PAGO : %.2f\n", pago);
					printf("TROCO: %.2f\n", troco);
				}
				else
				{
					printf("\nPagamento Insuficiente, tente novamente!\n\n");
				}
				system("PAUSE");
				system("CLS");
			}			
		}
		else if(menu == 3)
		{
			listar = 0;
			system("CLS");
			while(listar < qtd)
			{				
				
				printf("QTD[%d] -> Valor[%.2f]\n", listar, valor[listar]);
				listar = listar + 1;
			}
			system("PAUSE");
			system("CLS");
		}
	}
}
